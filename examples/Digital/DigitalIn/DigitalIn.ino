#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  Serial.print("D0= ");
  Serial.print(digitalIn(D0));
  Serial.print(",");
  Serial.print("D1= ");
  Serial.print(digitalIn(D1));
  Serial.print(",");
  Serial.print("D2= ");
  Serial.print(digitalIn(D2));
  Serial.print(",");
  Serial.print("D3= ");
  Serial.print(digitalIn(D3));
  Serial.print(",");
  Serial.print("D4= ");
  Serial.print(digitalIn(D4));
  Serial.print(",");
  Serial.print("D5= ");
  Serial.print(digitalIn(D5));
  Serial.print(",");
  Serial.print("D6= ");
  Serial.print(digitalIn(D6));
  Serial.println("");
  delay(200);
}