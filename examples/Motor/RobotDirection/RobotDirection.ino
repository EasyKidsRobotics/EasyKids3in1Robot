#include <EasyKids3in1Robot.h>
void setup() {
  EasyKids_Setup();
}

void loop() {
  waitForStart(); 
  forward(50); 
  delay(2000);
  turnRight(50);
  delay(2000);
  backward(50);
  delay(2000);
  turnLeft(50);
  delay(2000);
  spinLeft(50);
  delay(2000);
  spinRight(50);
  delay(2000);
  slideLeft(50);
  delay(2000);
  slideRight(50);
  delay(2000);
  motorStopAll();
}
