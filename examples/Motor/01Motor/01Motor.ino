#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}


void loop() {
  // put your main code here, to run repeatedly:
  motor(1,50);
  motor(2,50);
  motor(3,50);
  motor(4,50);
  delay(2000);
  motor(1,-50);
  motor(2,-50);
  motor(3,-50);
  motor(4,-50);
  delay(2000);
  motorStopAll();
  delay(1000);
}