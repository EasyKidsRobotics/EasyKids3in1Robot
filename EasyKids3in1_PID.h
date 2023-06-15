int PID_NumPin = 5;
int PID_SetupPin[] = {0, 0, 0, 0, 0, 0, 0, 0};
int PID_Min[] = {10, 10, 10, 10, 10, 10, 10, 10};
int PID_Max[] = {4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000};
float errors = 0;
float output = 0;
float integral = 0;
float derivative = 0;
float previous_error = 0;
uint16_t state_on_Line = 0;
uint32_t _lastPosition;
bool first_state_for_calribrate = 0;
uint8_t numSensor = 7;

void PID_set_Min(int S0, int S1, int S2, int S3, int S4, int S5, int S6, int S7)
{
  PID_Min[0] = S0;
  PID_Min[1] = S1;
  PID_Min[2] = S2;
  PID_Min[3] = S3;
  PID_Min[4] = S4;
  PID_Min[5] = S5;
  PID_Min[6] = S6;
  PID_Min[7] = S7;
}
void PID_set_Max(int S0, int S1, int S2, int S3, int S4, int S5, int S6, int S7)
{
  PID_Max[0] = S0;
  PID_Max[1] = S1;
  PID_Max[2] = S2;
  PID_Max[3] = S3;
  PID_Max[4] = S4;
  PID_Max[5] = S5;
  PID_Max[6] = S6;
  PID_Max[7] = S7;
}
void PID_set_Pin(int S0, int S1, int S2, int S3, int S4, int S5, int S6, int S7)
{
  PID_SetupPin[0] = S0;
  PID_SetupPin[1] = S1;
  PID_SetupPin[2] = S2;
  PID_SetupPin[3] = S3;
  PID_SetupPin[4] = S4;
  PID_SetupPin[5] = S5;
  PID_SetupPin[6] = S6;
  PID_SetupPin[7] = S7;
}
void setCalibrate(int round)
{
  display.setUTF8Font(Kanit09EN, Kanit09TH, NULL);
  display.setTextColor(0xffff, 0x0);
  display.drawUTF8String(String("Sensor Calibration"), 0, 0, GFXFF);

  if (first_state_for_calribrate == 0)
  {
    for (uint8_t i = 0; i < PID_NumPin; i++)
    {
      PID_Max[i] = 0;
      PID_Min[i] = 4095;
    }
    first_state_for_calribrate = 1;
  }
  for (int roundOfCalribtate = 0; roundOfCalribtate < round; roundOfCalribtate++)
  {
    for (uint8_t i = 0; i < PID_NumPin; i++)
    {
      if (analog(PID_SetupPin[i]) > PID_Max[i] || PID_Max[i] >= 4095)
      {
        PID_Max[i] = analog(PID_SetupPin[i]);
        if (PID_Max[i] > 4095)
          PID_Max[i] = 4095;
      }
    }
    for (uint8_t i = 0; i < PID_NumPin; i++)
    {
      if (analog(PID_SetupPin[i]) < PID_Min[i] || PID_Min[i] == 0)
      {
        PID_Min[i] = analog(PID_SetupPin[i]);
        if (PID_Min[i] < 0)
          PID_Min[i] = 0;
      }
    }
    delay(1);
  }
}

int ReadSensorMinValue(uint8_t _Pin)
{
  return PID_Min[_Pin];
}
int ReadSensorMaxValue(uint8_t _Pin)
{
  return PID_Max[_Pin];
}

int readline()
{
  bool onLine = false;
  long avg = 0;
  long sum = 0;
  for (uint8_t i = 0; i < PID_NumPin; i++)
  {
    long value = map(analog(PID_SetupPin[i]), PID_Min[i], PID_Max[i], 100, 0);
    value = constrain(value, 0, 100);
    if (value > 20)
    {
      onLine = true;
    }
    if (value > 5)
    {
      avg += (long)value * (i * 100);
      sum += value;
    }
  }
  if (!onLine)
  {
    if (_lastPosition < ((PID_NumPin - 1) * 100) / 2)
    {
      return 0;
    }
    else
    {
      return ((PID_NumPin - 1) * 100);
    }
  }
  _lastPosition = avg / sum;
  return _lastPosition;
}
void Run_PID(int RUN_PID_speed, float RUN_PID_KP, float RUN_PID_KD)
{
  PID_set_Pin(A0, A1, A2, A3, A4, A5, A6, 10);
  PID_set_Min(150, 200, 200, 0, 0, 0, 0, 0);
  PID_set_Max(2600, 2300, 2600, 0, 0, 0, 0, 0);

  int present_position = readline();
  int setpoint = ((PID_NumPin - 1) * 100) / 2;
  errors = present_position - setpoint;
  integral = integral + errors;
  derivative = (errors - previous_error);
  output = RUN_PID_KP * errors + RUN_PID_KD * derivative;

  int m1Speed = RUN_PID_speed + output;
  int m2Speed = RUN_PID_speed - output;
  motor(1, m1Speed);
  motor(2, m1Speed);
  motor(3, m2Speed);
  motor(4, m2Speed);
  delay(1);
  previous_error = errors;
}

void Run_fast(int delay_timer)
{
  float Kp = 4;
  float Ki = 0;
  float Kd = 50;
  uint16_t setpoint;
  float present_position;
  float errors = 0;
  float output = 0;
  float integral;
  float derivative;
  float previous_error;
  long timer = 0;
  timer = millis();
  do
  {
    int speed_max = 85;
    present_position = readline() / ((numSensor - 1) * 10);
    setpoint = 50.0;
    errors = setpoint - present_position;
    integral = integral + errors;
    derivative = (errors - previous_error);
    output = Kp * errors + Ki * integral + Kd * derivative;
    int max_output = 100;
    previous_error = errors;
    if (output > max_output)
      output = max_output;
    else if (output < -max_output)
      output = -max_output;
    motor(1, speed_max - output);
    motor(2, speed_max - output);
    motor(3, speed_max + output);
    motor(4, speed_max + output);
    delay(1);

  } while ((millis() - timer) < delay_timer);
}