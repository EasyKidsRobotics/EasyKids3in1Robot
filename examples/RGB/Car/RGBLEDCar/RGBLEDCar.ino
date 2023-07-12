#include <EasyKids3in1Robot.h>

/* <<<<<<<<< Command >>>>>>>>>
  ledSetBrightness(value); 
  ledCarSetBrightness(value);
  ledSetColorRGB(pin, r, g, b);
  ledSetColor(pin, Color);
  ledCarSetColorRGB(pin, r, g, b);
  ledCarSetColor(pin, Color);
  ledFillRGB(r, g, b);
  ledFillColor(Color);
  ledCarFillRGB(r, g, b);
  ledCarFillColor(Color);
  rainbow(wait);
  rainbowCar(wait);
  rainbowAll(wait);
  colorWipeRGB(r, g, b);
  colorWipe(Color);
  colorWipeCarRGB(r, g, b);
  colorWipeCar(Color);
  theaterChaseRainbow(wait);
  theaterChaseRainbowCar(wait);
  theaterChaseRainbowAll(wait);

  <<<<<<<<< TFT Color >>>>>>>>>
  BLACK 
  WHITE 
  RED 
  GREEN 
  BLUE 
  YELLOW 
  MAGENTA 
  CYAN 
  ORANGE 
  LEMON 
  PINK 
  NAVY 
  DARKGREEN 
  DARKCYAN 
  MAROON 
  PURPLE 
  OLIVE 
  LIGHTGREY 
  DARKGREY
*/

void setup() {
  EasyKids_Setup();
  ledCarSetBrightness(200);
}

void loop() {
  ledCarSetColorRGB(2, 255, 0, 255);
  delay(1000);
  ledCarSetColor(1, RED);
  delay(1000);
  ledCarFillRGB(255, 255, 0);
  delay(1000);
  ledCarFillColor(BLUE);
  delay(1000);
  rainbowCar(20);
  delay(1000);
  colorWipeCarRGB(255, 255, 0, 20);
  delay(1000);
  colorWipeCar(PINK, 20);
  delay(1000);
  theaterChaseRainbowCar(50);
  delay(1000);
}