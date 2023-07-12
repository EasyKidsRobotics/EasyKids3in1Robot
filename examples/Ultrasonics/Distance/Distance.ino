#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
    Serial.println(sonar());
    delay(50);
}