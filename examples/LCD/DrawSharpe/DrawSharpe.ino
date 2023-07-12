#include <EasyKids3in1Robot.h>

/*display.drawLine(x1, y1, x2, y2, TFT_BLUE);
display.drawFastHLine(x, y, w, TFT_MAROON)
display.drawFastVLine(x, y, h, TFT_GREEN)
display.drawRect(x, y, w, h, TFT_WHITE);
display.fillRect(x, y, w, h, TFT_PINK);
display.drawRoundRect(x, y, w, h, r, TFT_GREEN);
display.fillRoundRect(x, y, w, h, r, TFT_YELLOW);
display.drawCircle(x, y, r, TFT_RED);
display.fillCircle(x, y, r, TFT_MAGENTA);
display.drawEllipse(x, y, rx, ry,TFT_ORANGE);
display.fillEllipse(x, y, rx, ry,TFT_CYAN);
display.drawTriangle(x1, y1, x2, y2, ,x3, y3, TFT_OLIVE);
display.fillTriangle(x1, y1, x2, y2, ,x3, y3, TFT_PURPLE);*/

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