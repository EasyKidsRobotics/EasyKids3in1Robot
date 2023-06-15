
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

// When font files are placed in the Custom folder (TFT_eSPI\Fonts\Custom) then they must
// also be #included here:

// The CF_OL24 etc are a shorthand reference, but this is not essential to use the fonts

#ifdef LOAD_GFXFF

// New custom font file #includes
#include <Fonts/Custom/Orbitron_Light_24.h> // CF_OL24
#include <Fonts/Custom/Orbitron_Light_32.h> // CF_OL32
#include <Fonts/Custom/Roboto_Thin_24.h>    // CF_RT24
#include <Fonts/Custom/Satisfy_24.h>        // CF_S24
#include <Fonts/Custom/Yellowtail_32.h>     // CF_Y32

//#include "Fonts/Custom/THSarabun-14-th.h"

#include "Fonts/Custom/THSarabunNew8pt7b.h"
#include "Fonts/Custom/THSarabunNew9pt7b.h"
#include "Fonts/Custom/THSarabunNew10pt7b.h"
#include "Fonts/Custom/THSarabunNew12pt7b.h"
#include "Fonts/Custom/THSarabunNew14pt7b.h"
#include "Fonts/Custom/THSarabunNew16pt7b.h"
#include "Fonts/Custom/THSarabunNew18pt7b.h"
#include "Fonts/Custom/ENSarabunNew8pt7b.h"
#include "Fonts/Custom/ENSarabunNew9pt7b.h"
#include "Fonts/Custom/ENSarabunNew10pt7b.h"
#include "Fonts/Custom/ENSarabunNew12pt7b.h"
#include "Fonts/Custom/ENSarabunNew14pt7b.h"
#include "Fonts/Custom/ENSarabunNew16pt7b.h"
#include "Fonts/Custom/ENSarabunNew18pt7b.h"

#include "Fonts/Custom/THSarabunNewBold8pt7b.h"
#include "Fonts/Custom/THSarabunNewBold9pt7b.h"
#include "Fonts/Custom/THSarabunNewBold10pt7b.h"
#include "Fonts/Custom/THSarabunNewBold12pt7b.h"
#include "Fonts/Custom/THSarabunNewBold14pt7b.h"
#include "Fonts/Custom/THSarabunNewBold16pt7b.h"
#include "Fonts/Custom/THSarabunNewBold18pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold8pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold9pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold10pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold12pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold14pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold16pt7b.h"
#include "Fonts/Custom/ENSarabunNewBold18pt7b.h"

#include "Fonts/Custom/Kanit-Regular-9-en.h"
#include "Fonts/Custom/Kanit-Regular-12-en.h"
#include "Fonts/Custom/Kanit-Regular-18-en.h"
#include "Fonts/Custom/Kanit-Regular-24-en.h"

#include "Fonts/Custom/Kanit-Regular-9-th.h"
#include "Fonts/Custom/Kanit-Regular-12-th.h"
#include "Fonts/Custom/Kanit-Regular-18-th.h"
#include "Fonts/Custom/Kanit-Regular-24-th.h"

#include "Fonts/Custom/Kanit-Bold-9-en.h"
#include "Fonts/Custom/Kanit-Bold-12-en.h"
#include "Fonts/Custom/Kanit-Bold-18-en.h"
#include "Fonts/Custom/Kanit-Bold-24-en.h"

#include "Fonts/Custom/Kanit-Bold-9-th.h"
#include "Fonts/Custom/Kanit-Bold-12-th.h"
#include "Fonts/Custom/Kanit-Bold-18-th.h"
#include "Fonts/Custom/Kanit-Bold-24-th.h"

// #include "Fonts/Custom/Kanit-Italic-9-en.h"
// #include "Fonts/Custom/Kanit-Italic-12-en.h"
// #include "Fonts/Custom/Kanit-Italic-18-en.h"
// #include "Fonts/Custom/Kanit-Italic-24-en.h"

// #include "Fonts/Custom/Kanit-Italic-9-th.h"
// #include "Fonts/Custom/Kanit-Italic-12-th.h"
// #include "Fonts/Custom/Kanit-Italic-18-th.h"
// #include "Fonts/Custom/Kanit-Italic-24-th.h"

// #include "Fonts/Custom/Kanit-BoldItalic-9-en.h"
// #include "Fonts/Custom/Kanit-BoldItalic-12-en.h"
// #include "Fonts/Custom/Kanit-BoldItalic-18-en.h"
// #include "Fonts/Custom/Kanit-BoldItalic-24-en.h"

// #include "Fonts/Custom/Kanit-BoldItalic-9-th.h"
// #include "Fonts/Custom/Kanit-BoldItalic-12-th.h"
// #include "Fonts/Custom/Kanit-BoldItalic-18-th.h"
// #include "Fonts/Custom/Kanit-BoldItalic-24-th.h"

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
