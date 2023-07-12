#include "Adafruit_PWMServoDriverE.h"

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
int currentPos[6]; // current positions for 6 servos numbered 1 - 6

// ------ Function Motor ------
void motor(int num, int speedM)
{
   int mapSpeed;
    if (num == 1 && speedM > 0)
    {
      mapSpeed = map(speedM, 0, 100, 0, 4095);
      pwm.setPWM(0, mapSpeed, 0);
      pwm.setPWM(1, 0, 4095);
    }
    else if (num == 1 && speedM < 0)
    {
      mapSpeed = map(speedM, 0, -100, 0, 4095);
      pwm.setPWM(0, 0, 4095);
      pwm.setPWM(1, mapSpeed, 0);
    }
    else if (num == 1 && speedM == 0)
    {
      pwm.setPWM(0, 0, 4095);
      pwm.setPWM(1, 0, 4095);
    }
    else if (num == 2 && speedM > 0)
    {
      mapSpeed = map(speedM, 0, 100, 0, 4095);
      pwm.setPWM(2, mapSpeed, 0);
      pwm.setPWM(3, 0, 4095);
    }
    else if (num == 2 && speedM < 0)
    {
      mapSpeed = map(speedM, 0, -100, 0, 4095);
      pwm.setPWM(2, 0, 4095);
      pwm.setPWM(3, mapSpeed, 0);
    }
    else if (num == 2 && speedM == 0)
    {
      pwm.setPWM(2, 0, 4095);
      pwm.setPWM(3, 0, 4095);
    }
    else if (num == 3 && speedM > 0)
    {
      mapSpeed = map(speedM, 0, 100, 0, 4095);
      pwm.setPWM(4, mapSpeed, 0);
      pwm.setPWM(5, 0, 4095);
    }
    else if (num == 3 && speedM < 0)
    {
      mapSpeed = map(speedM, 0, -100, 0, 4095);
      pwm.setPWM(4, 0, 4095);
      pwm.setPWM(5, mapSpeed, 0);
    }
    else if (num == 3 && speedM == 0)
    {
      pwm.setPWM(4, 0, 4095);
      pwm.setPWM(5, 0, 4095);
    }
    else if (num == 4 && speedM > 0)
    {
      mapSpeed = map(speedM, 0, 100, 0, 4095);
      pwm.setPWM(6, mapSpeed, 0);
      pwm.setPWM(7, 0, 4095);
    }
    else if (num == 4 && speedM < 0)
    {
      mapSpeed = map(speedM, 0, -100, 0, 4095);
      pwm.setPWM(6, 0, 4095);
      pwm.setPWM(7, mapSpeed, 0);
    }
    else if (num == 4 && speedM == 0)
    {
      pwm.setPWM(6, 0, 4095);
      pwm.setPWM(7, 0, 4095);
    }
}

void forward(int speedM){
  motor(1,speedM);
  motor(2,speedM);
  motor(3,speedM);
  motor(4,speedM);
}

void backward(int speedM){
  motor(1,-speedM);
  motor(2,-speedM);
  motor(3,-speedM);
  motor(4,-speedM);
}

void turnLeft(int speedM){
  motor(1,0);
  motor(2,0);
  motor(3,speedM);
  motor(4,speedM);
}

void turnRight(int speedM){
  motor(1,speedM);
  motor(2,speedM);
  motor(3,0);
  motor(4,0);
}

void spinLeft(int speedM){
  motor(1,-speedM);
  motor(2,-speedM);
  motor(3,speedM);
  motor(4,speedM);
}

void spinRight(int speedM){
  motor(1,speedM);
  motor(2,speedM);
  motor(3,-speedM);
  motor(4,-speedM);
}

void slideRight(int speedM){
  motor(1,speedM);
  motor(2,-speedM);
  motor(3,-speedM);
  motor(4,speedM);
}

void slideLeft(int speedM){
  motor(1,-speedM);
  motor(2,speedM);
  motor(3,speedM);
  motor(4,-speedM);
}

// ------ Function MotorStopAll ------
void motorStopAll()
{
  pwm.setPWM(0, 0, 4095);
  pwm.setPWM(1, 0, 4095);
  pwm.setPWM(2, 0, 4095);
  pwm.setPWM(3, 0, 4095);
  pwm.setPWM(4, 0, 4095);
  pwm.setPWM(5, 0, 4095);
  pwm.setPWM(6, 0, 4095);
  pwm.setPWM(7, 0, 4095);
}



// ------ Function Servo ------
void servo(int pin, uint16_t degree)
{
  uint16_t mapServo = map(degree, 0, 180, 102, 512);
  if (pin == 1)
  {
    pwm.setPWM(8, 0, mapServo);
  }
  else if (pin == 2)
  {
    pwm.setPWM(9, 0, mapServo);
  }
  else if (pin == 3)
  {
    pwm.setPWM(10, 0, mapServo);
  }
  else if (pin == 4)
  {
    pwm.setPWM(11, 0, mapServo);
  }
  else if (pin == 5)
  {
    pwm.setPWM(12, 0, mapServo);
  }
  else if (pin == 6)
  {
    pwm.setPWM(13, 0, mapServo);
  }
}
