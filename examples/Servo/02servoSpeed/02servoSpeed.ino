#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}


void loop()
{
servoSpeed(0, 50, 180); //servoSpeed(SERVO 1-6, SPEED 0-100%, Angle 0-180);
delay(2000);
servoSpeed(0, 20, 0); //servoSpeed(SERVO 1-6, SPEED 0-100%, Angle 0-180);
delay(2000);
}
