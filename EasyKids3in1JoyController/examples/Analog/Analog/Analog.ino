#include <EasyKids3in1JoyController.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  Serial.println(analog(A0)); // A0 - A6
  delay(20);
}