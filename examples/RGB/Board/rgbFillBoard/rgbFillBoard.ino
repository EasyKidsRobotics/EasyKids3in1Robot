#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop()
{
// put your main code here, to run repeatedly:
// #define BLACK 0x000000   /*   0,   0,   0 */
// #define WHITE 0xFFFFFF   /* 255, 255, 255 */
// #define RED 0xff0000     /* 255,   0,   0 */
// #define GREEN 0x00ff00   /*   0, 255,   0 */
// #define BLUE 0x0000ff    /*   0,   0, 255 */
// #define YELLOW 0xffff00  /* 255, 255,   0 */
// #define MAGENTA 0xFF00FF /* 255,   0, 255 */
// #define CYAN 0x00ffff    /*   0, 255, 255 */
// #define ORANGE 0xffa500  /* 255, 180,   0 */
// #define LEMON 0x6dcd0a   /* 109, 255,   10 */
// #define PINK 0xffc0cb
// #define NAVY 0x000080      /*   0,   0, 128 */
// #define DARKGREEN 0x006400 /*   0, 128,   0 */
// #define DARKCYAN 0x008b8b  /*   0, 128, 128 */
// #define MAROON 0xb03060    /* 128,   0,   0 */
// #define PURPLE 0xa020f0    /* 128,   0, 128 */
// #define OLIVE 0x808000     /* 128, 128,   0 */
// #define LIGHTGREY 0xd3d3d3 /* 192, 192, 192 */
// #define DARKGREY 0xa9a9a9  /* 128, 128, 128 */

    rgbFillBoard(RED);
    delay(1000);
    rgbFillBoard(GREEN);
    delay(1000);
    rgbFillBoard(BLUE);
    delay(1000);
}
