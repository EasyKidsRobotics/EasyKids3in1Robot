int valSensor0;
int valSensor1;
int valSensor2;
int valSensor3;
int valSensor4;
int valSensor5;
int valSensor6;

int rightMotor;
int leftMotor;
int NumSensor = 7;
int Pin_Setup[] = { 0, 1, 2, 3, 4, 5, 6 };
int Sensor_Min[] = { 10, 10, 10, 10, 10, 10, 10 };
int Sensor_Max[] = { 4000, 4000, 4000, 4000, 4000, 4000, 4000 };
uint16_t stateOnLine = 0;
float KP;
float KD;
uint16_t setPoint;
uint32_t lastPosition;
float errors = 0;
float output = 0;
float derivative;
float previous_error;

void setSensorMin(int S0, int S1, int S2, int S3, int S4, int S5, int S6) {
  Sensor_Min[0] = S0;
  Sensor_Min[1] = S1;
  Sensor_Min[2] = S2;
  Sensor_Min[3] = S3;
  Sensor_Min[4] = S4;
  Sensor_Min[5] = S5;
  Sensor_Min[6] = S6;
}
void setSensorMax(int S0, int S1, int S2, int S3, int S4, int S5, int S6) {
  Sensor_Max[0] = S0;
  Sensor_Max[1] = S1;
  Sensor_Max[2] = S2;
  Sensor_Max[3] = S3;
  Sensor_Max[4] = S4;
  Sensor_Max[5] = S5;
  Sensor_Max[6] = S6;
}


int readline() {
  bool onLine = false;
  long avg = 0;
  long sum = 0;
  for (uint8_t i = 0; i < NumSensor; i++) {
    long value = map(analog(Pin_Setup[i]), Sensor_Min[i], Sensor_Max[i], 1000, 0);
    if (value > 500) {
      onLine = true;
    }
    if (value > 50) {
      avg += (long)value * (i * 1000);
      sum += value;
    }
  }
  if (!onLine) {
    if (lastPosition < 3000) {
      return 0;
    } else {
      return 6000;
    }
  }
  lastPosition = avg / sum;
  return lastPosition;
}

void trackPID(int setSpeed, float iKP, float iKD) {
  KP = iKP;
  KD = iKD;
  int speed = setSpeed;
  setPoint = 3000;
  errors = readline() - setPoint;
  derivative = (errors - previous_error);
  output = ((KP * errors) + (KD * derivative)) / 100;
  previous_error = errors;
  if (output > 70) {
    output = 70;
  } else if (output < -70) {
    output = -70;
  }
  leftMotor = speed - output;
  rightMotor = speed + output;
  if (leftMotor >= 70) {
    leftMotor = 70;
  }
  if (leftMotor <= 0) {
    leftMotor = -20;
  }
  if (rightMotor >= 70) {
    rightMotor = 70;
  }
  if (rightMotor <= 0) {
    rightMotor = -20;
  }
  motor(1, leftMotor);
  motor(4, rightMotor);
}

void lineTrackTime(int setSpeed, float iKP, float iKD, int setTime) {
  long timer = 0;
  timer = millis();
  do {
    trackPID(setSpeed, iKP, iKD);
  } while ((millis() - timer) < setTime);
  motor(1, 0);
  motor(4, 0);
}

void lineTrackCross(int setSpeed, float iKP, float iKD) {
  while (analog(0) > Sensor_Min[0] + 1000 || analog(6) > Sensor_Min[6] + 1000) {
    trackPID(setSpeed, iKP, iKD);
  }
  delay(30);
  motor(1, 0);
  motor(4, 0);
}

void lineDicularLeft(int setSpeed, float iKP, float iKD) {
  do {
    trackPID(setSpeed, iKP, iKD);
  } while (analog(4) > Sensor_Min[4] || analog(5) > Sensor_Min[5] || analog(6) > Sensor_Min[6]);
  motor(1, 0);
  motor(4, 0);
}

void lineDicularRight(int setSpeed, float iKP, float iKD) {
  do {
    trackPID(setSpeed, iKP, iKD);
  } while (analog(0) > Sensor_Min[0] || analog(1) > Sensor_Min[1] || analog(2) > Sensor_Min[2]);
  motor(1, 0);
  motor(4, 0);
}
void lineTurnLeft(int speedM) {
  motor(1, -speedM);
  motor(4, speedM);
  delay(20);
  do {
    motor(1, -speedM);
    motor(4, speedM);
  } while (analog(6) > Sensor_Min[6] + 1000);
  motor(1, 0);
  motor(4, 0);
}
void lineTurnRight(int speedM) {
  motor(1, speedM);
  motor(4, -speedM);
  delay(20);
  do {
    motor(1, speedM);
    motor(4, -speedM);
  } while (analog(0) > Sensor_Min[0] + 1000);
  motor(1, 0);
  motor(4, 0);
}
void readSensor() {
  displayClear();
  while (1) {
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(15, 5);
    display.setTextColor(0xF81F);
    display.print("Read Sensor 0 - 6");
    // ------- Sensor 0 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 30);
    display.setTextColor(0x0);
    display.print("Sensor(0) = ");
    display.print(valSensor0);
    valSensor0 = analog(0);
    display.setTextSize(2);
    display.setCursor(20, 30);
    display.setTextColor(0x07FF);
    display.print("Sensor(0) = ");
    display.print(valSensor0);
    // ------- Sensor 1 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 60);
    display.setTextColor(0x0);
    display.print("Sensor(1) = ");
    display.print(valSensor1);
    valSensor1 = analog(1);
    display.setTextSize(2);
    display.setCursor(20, 60);
    display.setTextColor(0x07FF);
    display.print("Sensor(1) = ");
    display.print(valSensor1);
    // ------- Sensor 2 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 90);
    display.setTextColor(0x0);
    display.print("Sensor(2) = ");
    display.print(valSensor2);
    valSensor2 = analog(2);
    display.setTextSize(2);
    display.setCursor(20, 90);
    display.setTextColor(0x07FF);
    display.print("Sensor(2) = ");
    display.print(valSensor2);
    // ------- Sensor 3 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 120);
    display.setTextColor(0x0);
    display.print("Sensor(3) = ");
    display.print(valSensor3);
    valSensor3 = analog(3);
    display.setTextSize(2);
    display.setCursor(20, 120);
    display.setTextColor(0x07FF);
    display.print("Sensor(3) = ");
    display.print(valSensor3);
    // ------- Sensor 4 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 150);
    display.setTextColor(0x0);
    display.print("Sensor(4) = ");
    display.print(valSensor4);
    valSensor4 = analog(4);
    display.setTextSize(2);
    display.setCursor(20, 150);
    display.setTextColor(0x07FF);
    display.print("Sensor(4) = ");
    display.print(valSensor4);
    // ------- Sensor 5 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 180);
    display.setTextColor(0x0);
    display.print("Sensor(5) = ");
    display.print(valSensor5);
    valSensor5 = analog(5);
    display.setTextSize(2);
    display.setCursor(20, 180);
    display.setTextColor(0x07FF);
    display.print("Sensor(5) = ");
    display.print(valSensor5);
    // ------- Sensor 6 -------
    display.setTextFont(GLCD);
    display.setTextSize(2);
    display.setCursor(20, 210);
    display.setTextColor(0x0);
    display.print("Sensor(6) = ");
    display.print(valSensor6);
    valSensor6 = analog(6);
    display.setTextSize(2);
    display.setCursor(20, 210);
    display.setTextColor(0x07FF);
    display.print("Sensor(6) = ");
    display.print(valSensor6);
    delay(50);
  }
}