#include "Adafruit_NeoPixelE.h"

// ------- NeoPixels Pin ------
#define RGB_PIN_BOARD 25
#define RGB_PIN_CAR 19
#define RGB_COUNT_BOARD 6
#define RGB_COUNT_CAR 12

// New color definitions use for all my libraries
#define BLACK 0x000000   /*   0,   0,   0 */
#define WHITE 0xFFFFFF   /* 255, 255, 255 */
#define RED 0xff0000     /* 255,   0,   0 */
#define GREEN 0x00ff00   /*   0, 255,   0 */
#define BLUE 0x0000ff    /*   0,   0, 255 */
#define YELLOW 0xffff00  /* 255, 255,   0 */
#define MAGENTA 0xFF00FF /* 255,   0, 255 */
#define CYAN 0x00ffff    /*   0, 255, 255 */
#define ORANGE 0xffa500  /* 255, 180,   0 */
#define LEMON 0x6dcd0a   /* 109, 255,   10 */
#define PINK 0xffc0cb
#define NAVY 0x000080      /*   0,   0, 128 */
#define DARKGREEN 0x006400 /*   0, 128,   0 */
#define DARKCYAN 0x008b8b  /*   0, 128, 128 */
#define MAROON 0xb03060    /* 128,   0,   0 */
#define PURPLE 0xa020f0    /* 128,   0, 128 */
#define OLIVE 0x808000     /* 128, 128,   0 */
#define LIGHTGREY 0xd3d3d3 /* 192, 192, 192 */
#define DARKGREY 0xa9a9a9  /* 128, 128, 128 */

Adafruit_NeoPixel rgb(RGB_COUNT_BOARD, RGB_PIN_BOARD, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel rgbCar(RGB_COUNT_CAR, RGB_PIN_CAR, NEO_GRB + NEO_KHZ800);

// ------ Function rgbSetBrightness ------
void ledSetBrightness(int value)
{
  rgb.setBrightness(value);
}

// ------ Function rgbSetBrightness ------
void ledCarSetBrightness(int value)
{
  rgbCar.setBrightness(value);
}

// ------ Function rgb Num RGB ------
void ledSetColorRGB(int numPin, int r, int g, int b)
{
  rgb.setPixelColor(numPin, rgb.Color(r, g, b));
  rgb.show();
}

// ------ Function rgb Num Colors ------
void ledSetColor(int numPin, uint32_t cc)
{
  rgb.setPixelColor(numPin, cc);
  rgb.show();
}

// ------ Function rgbCar Num RGB ------
void ledCarSetColorRGB(int numPin, int r, int g, int b)
{
  rgbCar.setPixelColor(numPin, rgbCar.Color(r, g, b));
  rgbCar.show();
}

// ------ Function rgbCar Num Colors ------
void ledCarSetColor(int numPin, uint32_t cc)
{
  rgbCar.setPixelColor(numPin,cc);
  rgbCar.show();
}

// ------ Function rgbFillBoard RGB ------
void ledFillRGB(int r, int g, int b)
{
  for (int i = 0; i <= RGB_COUNT_BOARD; i++)
  {
    rgb.setPixelColor(i, rgb.Color(r, g, b));
  }
  rgb.show();
}

// ------ Function rgbFillBoard Color ------
void ledFillColor(uint32_t cc)
{
  for (int i = 0; i <= RGB_COUNT_BOARD; i++)
  {
    rgb.setPixelColor(i, cc);
  }
  rgb.show();
}

// ------ Function rgbFillCar RGB ------
void ledCarFillRGB(int r, int g, int b)
{
  for (int i = 0; i <= RGB_COUNT_CAR; i++)
  {
    rgbCar.setPixelColor(i, rgbCar.Color(r, g, b));
  }
  rgbCar.show();
}

// ------ Function rgbFillCar Color ------
void ledCarFillColor(uint32_t cc)
{
  for (int i = 0; i <= RGB_COUNT_CAR; i++)
  {
    rgbCar.setPixelColor(i, cc);
  }
  rgbCar.show();
}

// ------ Function rainbow ------
void rainbow(int wait)
{
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256)
  {
    rgb.rainbow(firstPixelHue);
    rgb.show(); // Update strip with new contents
    delay(wait);     // Pause for a moment
  }
}

// ------ Function rainbowCar ------
void rainbowCar(int wait)
{
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256)
  {
    rgbCar.rainbow(firstPixelHue);
    rgbCar.show(); // Update strip with new contents
    delay(wait);   // Pause for a moment
  }
}

// ------ Function ColorWipe RGB ------
void colorWipeRGB(int r, int g, int b, int wait)
{
  for (int i = 0; i < rgb.numPixels(); i++)
  {                                                   
    rgb.setPixelColor(i, rgb.Color(r, g, b)); 
    rgb.show();                                   
    delay(wait);                                        
  }
}

// ------ Function ColorWipe Color ------
void colorWipe(uint32_t cc, int wait)
{
  for (int i = 0; i < rgb.numPixels(); i++)
  {                                                    
    rgb.setPixelColor(i, cc); 
    rgb.show();                                 
    delay(wait);                                        
  }
}

// ------ Function ColorWipeCar RGB ------
void colorWipeCarRGB(int r, int g, int b, int wait)
{
  for (int i = 0; i < rgbCar.numPixels(); i++)
  {                                                   
    rgbCar.setPixelColor(i, rgbCar.Color(r, g, b)); 
    rgbCar.show();                                   
    delay(wait);                                        
  }
}

// ------ Function ColorWipeCar Color ------
void colorWipeCar(uint32_t cc, int wait)
{
  for (int i = 0; i < rgbCar.numPixels(); i++)
  {                                                    
    rgbCar.setPixelColor(i, cc); 
    rgbCar.show();                                 
    delay(wait);                                        
  }
}

// ------ theaterChaseRainbow ------
void theaterChaseRainbow(int wait)
{
  int firstPixelHue = 0; // First pixel starts at red (hue 0)
  for (int a = 0; a < 30; a++)
  { // Repeat 30 times...
    for (int b = 0; b < 3; b++)
    {                   //  'b' counts from 0 to 2...
      rgb.clear(); //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in increments of 3...
      for (int c = b; c < rgb.numPixels(); c += 3)
      {
        // hue of pixel 'c' is offset by an amount to make one full
        // revolution of the color wheel (range 65536) along the length
        // of the strip (strip.numPixels() steps):
        int hue = firstPixelHue + c * 65536L / rgb.numPixels();
        uint32_t color = rgb.gamma32(rgb.ColorHSV(hue)); // hue -> RGB
        rgb.setPixelColor(c, color);                          // Set pixel 'c' to value 'color'
      }
      rgb.show();             // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}

// ------ theaterChaseRainbow ------
void theaterChaseRainbowCar(int wait)
{
  int firstPixelHue = 0; // First pixel starts at red (hue 0)
  for (int a = 0; a < 30; a++)
  { // Repeat 30 times...
    for (int b = 0; b < 3; b++)
    {                   //  'b' counts from 0 to 2...
      rgbCar.clear(); //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in increments of 3...
      for (int c = b; c < rgbCar.numPixels(); c += 3)
      {
        // hue of pixel 'c' is offset by an amount to make one full
        // revolution of the color wheel (range 65536) along the length
        // of the strip (strip.numPixels() steps):
        int hue = firstPixelHue + c * 65536L / rgbCar.numPixels();
        uint32_t color = rgbCar.gamma32(rgbCar.ColorHSV(hue)); // hue -> RGB
        rgbCar.setPixelColor(c, color);                          // Set pixel 'c' to value 'color'
      }
      rgbCar.show();             // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}

// ------ Function rainbowAll ------
unsigned long previousMillis = 0;
void rainbowAll(int wait) {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= wait) {
    previousMillis = currentMillis;

    static int j = 0;
    j++;

    for (int i = 0; i < rgb.numPixels(); i++) {
      int hue = map((i + j) % 256, 0, 255, 0, 65535);
      rgb.setPixelColor(i, rgb.ColorHSV(hue, 255, 255));  // Set color on the first strip
    }

    for (int i = 0; i < rgbCar.numPixels(); i++) {
      int hue = map((i + j) % 256, 0, 255, 0, 65535);
      rgbCar.setPixelColor(i, rgbCar.ColorHSV(hue, 255, 255));  // Set color on the second strip
    }

    rgb.show();  // Update the first strip
    rgbCar.show();  // Update the second strip
  }
}

// ------ Function theaterChaseRainbowAll ------
unsigned long previousTheaterChaseMillis = 0;
int theaterChaseIndex1 = 0;
int theaterChaseIndex2 = 0;
void theaterChaseRainbowAll(int wait) {
  unsigned long currentMillis = millis();
  if (currentMillis - previousTheaterChaseMillis >= wait) {
    previousTheaterChaseMillis = currentMillis;

    for (int i = 0; i < rgb.numPixels(); i++) {
      int hue = map(i + theaterChaseIndex1, 0, rgb.numPixels() * 6, 0, 65535);
      rgb.setPixelColor(i, rgb.ColorHSV(hue, 255, 255));  // Set theater chase rainbow color on the first strip
    }

    for (int i = 0; i < rgbCar.numPixels(); i++) {
      int hue = map(i + theaterChaseIndex2, 0, rgbCar.numPixels() * 3, 0, 65535);
      rgbCar.setPixelColor(i, rgbCar.ColorHSV(hue, 255, 255));  // Set theater chase rainbow color on the second strip
    }

    rgb.show();  // Update the first strip
    rgbCar.show();  // Update the second strip

    theaterChaseIndex1 = (theaterChaseIndex1 + 1) % (rgb.numPixels() * 6);  // Increment the theater chase index
    theaterChaseIndex2 = (theaterChaseIndex2 + 1) % (rgbCar.numPixels() * 3);  // Increment the theater chase index
  }
}





