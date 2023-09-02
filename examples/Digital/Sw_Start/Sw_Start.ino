#include <EasyKids3in1.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  Serial.print("SW = ");
  Serial.print(sw_Start());
  Serial.println("");
  delay(100);
}