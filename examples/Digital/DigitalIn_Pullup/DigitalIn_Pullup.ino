#include <EasyKids3in1.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  Serial.print("D0= ");
  Serial.print(digitalIn_Pullup(D0));
  Serial.print(",");
  Serial.print("D1= ");
  Serial.print(digitalIn_Pullup(D1));
  Serial.print(",");
  Serial.print("D2= ");
  Serial.print(digitalIn_Pullup(D2));
  Serial.print(",");
  Serial.print("D3= ");
  Serial.print(digitalIn_Pullup(D3));
  Serial.print(",");
  Serial.print("D4= ");
  Serial.print(digitalIn_Pullup(D4));
  Serial.print(",");
  Serial.print("D5= ");
  Serial.print(digitalIn_Pullup(D5));
  Serial.print(",");
  Serial.print("D6= ");
  Serial.print(digitalIn_Pullup(D6));
  Serial.println("");
  delay(200);
}