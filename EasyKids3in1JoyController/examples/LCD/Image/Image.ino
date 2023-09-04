#include <EasyKids3in1JoyController.h>
#include "logo.h"

void setup() {
  EasyKids_Setup();
}

void loop() {
  // http://www.rinkydinkelectronics.com/t_imageconverter565.php
  display.pushImage(0, 0, 240, 240, easykidslogo);
  delay(1000);
}