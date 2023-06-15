#include <EasyKids3in1Robot.h>
#include "logo.h"

void setup() {
  EasyKids_Setup();
}

void loop()
{
    // put your main code here, to run repeatedly:
    // http://www.rinkydinkelectronics.com/t_imageconverter565.php
    display.pushImage(0, 0, 240, 240, EasyKidsLogo);
    delay(1000);
}