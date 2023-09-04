#include <EasyKids3in1JoyController.h>

/*
display.drawLine(x1, y1, x2, y2, color);
display.drawFastHLine(x, y, w, color)
display.drawFastVLine(x, y, h, color)
display.drawRect(x, y, w, h, color);
display.fillRect(x, y, w, h, color);
display.drawRoundRect(x, y, w, h, radius, color);
display.fillRoundRect(x, y, w, h, radius, color);
display.drawCircle(x, y, radius, color);
display.fillCircle(x, y, radius, color);
display.drawTriangle(x1, y1, x2, y2, x3, y3, color);

<<<<<<<<< TFT Color >>>>>>>>>
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
  display.drawLine(10, 10, 50, 10, TFT_BLUE);
  display.drawFastHLine(10, 30, 50, TFT_MAROON);
  display.drawFastVLine(80, 10, 50, TFT_GREEN);
  display.drawRect(10, 60, 30, 30, TFT_WHITE);
  display.fillRect(10, 100, 30, 30, TFT_PINK);
  display.drawRoundRect(120, 10, 30, 30, 4, TFT_GREEN);
  display.fillRoundRect(120, 50, 30, 30, 4, TFT_YELLOW);
  display.drawCircle(200, 30, 20, TFT_RED);
  display.fillCircle(200, 90, 20, TFT_MAGENTA);
  display.drawEllipse(200, 170, 10, 30, TFT_ORANGE);
  display.fillEllipse(150, 170, 10, 30, TFT_CYAN);
  display.drawTriangle(10, 235, 50, 235, 30, 195, TFT_OLIVE);
  display.fillTriangle(70, 235, 110, 235, 90, 195, TFT_PURPLE);
}