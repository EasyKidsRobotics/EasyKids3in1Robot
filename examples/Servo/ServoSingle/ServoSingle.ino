#include <EasyKids3in1Robot.h>

int i;

void setup() {
  EasyKids_Setup();
}

void loop(){
  for (i = 0; i <= 180; i++)
  {
    servo(1, i);
    Serial.println(i);
    delay(20);
  }
  for (i = 180; i >= 0; i--)
  {
    servo(1, i);
    Serial.println(i);
    delay(20);
  }
}
