#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}
void loop() {
digitalOut(D0, 1);
digitalOut(D1, 1);
digitalOut(D2, 1);
digitalOut(D3, 1);
digitalOut(D4, 1);
digitalOut(D5, 1);
digitalOut(D6, 1);
delay(1000);
digitalOut(D0, 0);
digitalOut(D2, 0);
digitalOut(D3, 0);
digitalOut(D4, 0);
digitalOut(D5, 0);
digitalOut(D6, 0);
delay(1000);
}