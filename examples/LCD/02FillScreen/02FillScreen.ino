#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
// // New color definitions use for all my libraries
// #define TFT_BLACK 0x0000       /*   0,   0,   0 */
// #define TFT_NAVY 0x000F        /*   0,   0, 128 */
// #define TFT_DARKGREEN 0x03E0   /*   0, 128,   0 */
// #define TFT_DARKCYAN 0x03EF    /*   0, 128, 128 */
// #define TFT_MAROON 0x7800      /* 128,   0,   0 */
// #define TFT_PURPLE 0x780F      /* 128,   0, 128 */
// #define TFT_OLIVE 0x7BE0       /* 128, 128,   0 */
// #define TFT_LIGHTGREY 0xC618   /* 192, 192, 192 */
// #define TFT_DARKGREY 0x7BEF    /* 128, 128, 128 */
// #define TFT_BLUE 0x001F        /*   0,   0, 255 */
// #define TFT_GREEN 0x07E0       /*   0, 255,   0 */
// #define TFT_CYAN 0x07FF        /*   0, 255, 255 */
// #define TFT_RED 0xF800         /* 255,   0,   0 */
// #define TFT_MAGENTA 0xF81F     /* 255,   0, 255 */
// #define TFT_YELLOW 0xFFE0      /* 255, 255,   0 */
// #define TFT_WHITE 0xFFFF       /* 255, 255, 255 */
// #define TFT_ORANGE 0xFDA0      /* 255, 180,   0 */
// #define TFT_GREENYELLOW 0xB7E0 /* 180, 255,   0 */
// #define TFT_PINK 0xFC9F
// // Next is a special 16 bit colour value that encodes to 8 bits
// // and will then decode back to the same 16 bit value.
// // Convenient for 8 bit and 16 bit transparent sprites.
// #define TFT_TRANSPARENT 0x0120
  display.fillScreen(TFT_RED);
  delay(1000);
  display.fillScreen(TFT_GREEN);
  delay(1000);
  display.fillScreen(TFT_BLUE);
  delay(1000);
}