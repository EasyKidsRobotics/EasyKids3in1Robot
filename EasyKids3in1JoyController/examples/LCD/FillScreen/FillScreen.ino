#include <EasyKids3in1JoyController.h>

/* <<<<<<<<< TFT Color >>>>>>>>>
TFT_BLACK 
TFT_NAVY 
TFT_DARKGREEN 
TFT_DARKCYAN 
TFT_MAROON 
TFT_PURPLE 
TFT_OLIVE 
TFT_LIGHTGREY 
TFT_DARKGREY 
TFT_BLUE 
TFT_GREEN 
TFT_CYAN 
TFT_RED 
TFT_MAGENTA 
TFT_YELLOW
TFT_WHITE 
TFT_ORANGE 
TFT_GREENYELLOW 
TFT_PINK 
*/

void setup() {
  EasyKids_Setup();
}

void loop() {
  display.fillScreen(TFT_RED);
  delay(1000);
  display.fillScreen(TFT_GREEN);
  delay(1000);
  display.fillScreen(TFT_BLUE);
  delay(1000);
}