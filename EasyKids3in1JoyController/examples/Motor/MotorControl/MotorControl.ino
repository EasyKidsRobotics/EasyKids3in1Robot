#include <EasyKids3in1JoyController.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  motor(1,50); //motor 1 forward
  motor(2,50); //motor 1 forward
  motor(3,50); //motor 1 forward
  motor(4,50); //motor 1 forward
  delay(2000); //delay time 2 Second
  motor(1,-50); //motor 1 backward
  motor(2,-50); //motor 2 backward
  motor(3,-50); //motor 3 backward
  motor(4,-50); //motor 4 backward
  delay(2000); //delay time 2 Second
  motorStopAll(); //motorStopAll
  delay(1000); //delay time 1 Second
}