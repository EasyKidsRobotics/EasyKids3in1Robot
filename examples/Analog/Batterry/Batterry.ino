#include <EasyKids3in1.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  // print the battery voltage and percentage
  Serial.print("Battery voltage: ");
  Serial.print(Vbattery(), 2);
  Serial.print("V, ");
  Serial.print(battery());
  Serial.println("%");
  delay(10);
}