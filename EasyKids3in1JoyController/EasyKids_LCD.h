#include <Wire.h>
#include "TFT_eSPI.h"
#include "logo.h"
#include "Free_Fonts.h"

TFT_eSPI display = TFT_eSPI();

void displayClear(){
   display.fillScreen(TFT_BLACK);
}

void display3in1(){
   display.setTextSize(5);
   display.setCursor(135, 20);
   display.setTextColor(0xf800);
   display.println(String("3"));

   //tft.setTextFont(GLCD);
   display.setTextSize(4);
   display.setCursor(162, 19);
   display.setTextColor(0xffff);
   display.println(String("in"));

   //tft.setTextFont(GLCD);
   display.setTextSize(5);
   display.setCursor(210, 20);
   display.setTextColor(0xf800);
   display.println(String("1"));

   //tft.setTextFont(GLCD);
   display.setTextSize(5);
   display.setCursor(0, 75);
   display.setTextColor(0x333f);
   display.println(String("EASYKIDS"));

   //tft.setTextFont(GLCD);
   display.setTextSize(5);
   display.setCursor(90, 135);
   display.setTextColor(0xffe0);
   display.println(String("ROBOT"));

   //tft.setTextFont(GLCD);
   display.setTextSize(5);
   display.setCursor(150, 190);
   display.setTextColor(0x3660);
   display.println(String("KIT"));

}

// http://www.rinkydinkelectronics.com/t_imageconverter565.php
//display.begin();
//display.setRotation(value); // 0-3
//display.setTextSize(value);
//display.fillScreen(TFT_Color);
//display.setTextColor(TFT_Color, TFT_Color);
//display.setFreeFont(myfont)
//display.drawString("TEXT", x, y);
//display.print(value);
//display.pushImage(0,0,240,240,EasyKidsLogo);
//display.setCursor(x, y);
//display.drawLine(x0, y0, x1, y1, TFT_Color);
//display.drawRect(x, y, w, h, TFT_Color);
//display.fillRect(x, y, w, h, TFT_Color);
//display.drawRoundRect(x, y, w, h, r, TFT_Color);
//display.fillRoundRect(x, y, w, h, r, TFT_Color);
//display.drawCircle(x, y, r, TFT_Color);
//display.fillCircle(x, y, r, TFT_Color);
//display.drawEllipse(x, y, rx, ry,TFT_Color);
//display.fillEllipse(x, y, rx, ry,TFT_Color);
//display.drawTriangle(x1, y1, x2, y2, ,x3, y3, TFT_Color);
//display.fillTriangle(x1, y1, x2, y2, ,x3, y3, TFT_Color);

// //These enumerate the text plotting alignment (reference datum point)
// #define TL_DATUM 0    // Top left (default)
// #define TC_DATUM 1    // Top centre
// #define TR_DATUM 2    // Top right
// #define ML_DATUM 3    // Middle left
// #define CL_DATUM 3    // Centre left, same as above
// #define MC_DATUM 4    // Middle centre
// #define CC_DATUM 4    // Centre centre, same as above
// #define MR_DATUM 5    // Middle right
// #define CR_DATUM 5    // Centre right, same as above
// #define BL_DATUM 6    // Bottom left
// #define BC_DATUM 7    // Bottom centre
// #define BR_DATUM 8    // Bottom right
// #define L_BASELINE 9  // Left character baseline (Line the 'A' character would sit on)
// #define C_BASELINE 10 // Centre character baseline
// #define R_BASELINE 11 // Right character baseline

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

// #define Sarabun08EN &ENSarabunNew8pt7b
// #define Sarabun08TH &THSarabunNew8pt8b
// // #define CF_TH_R_09_EN &ENSarabunNew9pt7b
// // #define CF_TH_R_09_TH &THSarabunNew9pt8b
// #define Sarabun09EN &ENSarabunNew9pt7b
// #define Sarabun09TH &THSarabunNew9pt8b

// #define Sarabun10EN &ENSarabunNew10pt7b
// #define Sarabun10TH &THSarabunNew10pt8b
// #define Sarabun12EN &ENSarabunNew12pt7b
// #define Sarabun12TH &THSarabunNew12pt8b
// #define Sarabun14EN &ENSarabunNew14pt7b
// #define Sarabun14TH &THSarabunNew14pt8b
// #define Sarabun16EN &ENSarabunNew16pt7b
// #define Sarabun16TH &THSarabunNew16pt8b
// #define Sarabun18EN &ENSarabunNew18pt7b
// #define Sarabun18TH &THSarabunNew18pt8b
// // Sarabun Bold
// #define SarabunBold8EN &ENSarabunNewBold8pt7b
// #define SarabunBold8TH &THSarabunNewBold8pt8b
// #define SarabunBold9EN &ENSarabunNewBold9pt7b
// #define SarabunBold9TH &THSarabunNewBold9pt8b
// #define SarabunBold10EN &ENSarabunNewBold10pt7b
// #define SarabunBold10TH &THSarabunNewBold10pt8b
// #define SarabunBold12EN &ENSarabunNewBold12pt7b
// #define SarabunBold12TH &THSarabunNewBold12pt8b
// #define SarabunBold14EN &ENSarabunNewBold14pt7b
// #define SarabunBold14TH &THSarabunNewBold14pt8b
// #define SarabunBold16EN &ENSarabunNewBold16pt7b
// #define SarabunBold16TH &THSarabunNewBold16pt8b
// #define SarabunBold18EN &ENSarabunNewBold18pt7b
// #define SarabunBold18TH &THSarabunNewBold18pt8b
// // Kanit Regular
// // #define CF_KN_R_09_EN &Kanit_Regular9pt7b
// // #define CF_KN_R_09_TH &Kanit_Regular9pt8b
// #define Kanit09EN &Kanit_Regular9pt7b
// #define Kanit09TH &Kanit_Regular9pt8b
// #define Kanit12EN &Kanit_Regular12pt7b
// #define Kanit12TH &Kanit_Regular12pt8b
// #define Kanit18EN &Kanit_Regular18pt7b
// #define Kanit18TH &Kanit_Regular18pt8b
// #define Kanit24EN &Kanit_Regular24pt7b
// #define Kanit24TH &Kanit_Regular24pt8b
// // Kanit Bold
// #define KanitBold9EN &Kanit_Bold9pt7b
// #define KanitBold9TH &Kanit_Bold9pt8b
// #define KanitBold12EN &Kanit_Bold12pt7b
// #define KanitBold12TH &Kanit_Bold12pt8b
// #define KanitBold18EN &Kanit_Bold18pt7b
// #define KanitBold18TH &Kanit_Bold18pt8b
// #define KanitBold24EN &Kanit_Bold24pt7b
// #define KanitBold24TH &Kanit_Bold24pt8b
