#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  //print value from vr 0-100
  Serial.println(vr(100)); 
  delay(10);
}