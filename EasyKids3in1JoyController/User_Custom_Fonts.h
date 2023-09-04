
// Custom "Adafruit" compatible font files can be added to the "TFT_eSPI/Fonts/Custom" folder
// Fonts in a suitable format can be created using a Squix blog web based tool here:
/*
   https://blog.squix.org/2016/10/font-creator-now-creates-adafruit-gfx-fonts.html
*/

// Note: At the time of writing there is a last character code definition bug in the
// Squix font file format so do NOT try and print the tilda (~) symbol (ASCII 0x7E)
// Alternatively look at the end of the font header file and edit:  0x7E to read 0x7D
/* e.g.                                                                          vvvv
  (uint8_t  *)Orbitron_Light_32Bitmaps,(GFXglyph *)Orbitron_Light_32Glyphs,0x20, 0x7D, 32};
                                                                                 ^^^^
*/

// When font files are placed in the Custom folder then they must also be #included here:

// The comment added is a shorthand reference but this is not essential

#ifdef LOAD_GFXFF

// New custom font file #includes
#include <Fonts/Custom/Orbitron_Light_24.h> // CF_OL24
#include <Fonts/Custom/Orbitron_Light_32.h> // CF_OL32
#include <Fonts/Custom/Roboto_Thin_24.h>    // CF_RT24
#include <Fonts/Custom/Satisfy_24.h>        // CF_S24
#include <Fonts/Custom/Yellowtail_32.h>     // CF_Y32

#define CF_OL24 &Orbitron_Light_24
#define CF_OL32 &Orbitron_Light_32
#define CF_RT24 &Roboto_Thin_24
#define CF_S24 &Satisfy_24
#define CF_Y32 &Yellowtail_32

#include <Fonts/Custom/Kanit-Regular-9-en.h>
#include <Fonts/Custom/Kanit-Regular-9-th.h>

// #include "Fonts/Kanit-Regular-9-en.h"
// #include "Fonts/Kanit-Regular-12-en.h"
// #include "Fonts/Kanit-Regular-18-en.h"
// #include "Fonts/Kanit-Regular-24-en.h"

// #include "Fonts/Kanit-Regular-9-th.h"
// #include "Fonts/Kanit-Regular-12-th.h"
// #include "Fonts/Kanit-Regular-18-th.h"
// #include "Fonts/Kanit-Regular-24-th.h"

// #include "Fonts/Kanit-Bold-9-en.h"
// #include "Fonts/Kanit-Bold-12-en.h"
// #include "Fonts/Kanit-Bold-18-en.h"
// #include "Fonts/Kanit-Bold-24-en.h"

// #include "Fonts/Kanit-Italic-9-en.h"
// #include "Fonts/Kanit-Italic-12-en.h"
// #include "Fonts/Kanit-Italic-18-en.h"
// #include "Fonts/Kanit-Italic-24-en.h"

// #include "Fonts/Kanit-BoldItalic-9-en.h"
// #include "Fonts/Kanit-BoldItalic-12-en.h"
// #include "Fonts/Kanit-BoldItalic-18-en.h"
// #include "Fonts/Kanit-BoldItalic-24-en.h"

// #include "Fonts/Kanit-Bold-9-th.h"
// #include "Fonts/Kanit-Bold-12-th.h"
// #include "Fonts/Kanit-Bold-18-th.h"
// #include "Fonts/Kanit-Bold-24-th.h"

// #include "Fonts/Kanit-Italic-9-th.h"
// #include "Fonts/Kanit-Italic-12-th.h"
// #include "Fonts/Kanit-Italic-18-th.h"
// #include "Fonts/Kanit-Italic-24-th.h"

// #include "Fonts/Kanit-BoldItalic-9-th.h"
// #include "Fonts/Kanit-BoldItalic-12-th.h"
// #include "Fonts/Kanit-BoldItalic-18-th.h"
// #include "Fonts/Kanit-BoldItalic-24-th.h"

#define CF_KN_REG_09_EN &Kanit_Regular9pt7b
#define CF_KN_REG_09_TH &Kanit_Regular9pt8b
#define CF_KN_REG_12_EN &Kanit_Regular12pt7b
#define CF_KN_REG_12_TH &Kanit_Regular12pt8b
#define CF_KN_REG_18_EN &Kanit_Regular18pt7b
#define CF_KN_REG_18_TH &Kanit_Regular18pt8b
#define CF_KN_REG_24_EN &Kanit_Regular24pt7b
#define CF_KN_REG_24_TH &Kanit_Regular24pt8b

#endif

// Shorthand references - any coding scheme can be used, here CF_ = Custom Font
// The #defines below MUST be added to sketches to use shorthand references, so
// they are only put here for reference and copy+paste purposes!
/*
#define CF_OL24 &Orbitron_Light_24
#define CF_OL32 &Orbitron_Light_32
#define CF_RT24 &Roboto_Thin_24
#define CF_S24  &Satisfy_24
#define CF_Y32  &Yellowtail_32
*/
