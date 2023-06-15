#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  display.setUTF8Font(Kanit09EN, Kanit09TH, NULL);
  display.setTextColor(0xffff, 0x0);
  display.drawUTF8String(String("Hello world!"), 0, 0, GFXFF);
  delay(1000);
}