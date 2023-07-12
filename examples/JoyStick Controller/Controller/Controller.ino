#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
  display3in1();
  welcomeSong();
}

void loop() {
  JoyController();
  Serial.println(joyButton);
  if (joyLX > 95) {  //Analog Left Move Right Value Max 100
    
  } else if (joyLX < -95) {  //Analog Left Move Left Value min -100

  } else if (joyRX > 95) {  //Analog Right Move Right Value 100

  } else if (joyRX < -95) {  //Analog Right Move Left Value -100

  } else if (joyRY > 95) {  //Analog Right Move UP Value 100

  } else if (joyRY < -95) {  //Analog Right Move Down Value -100

  } else if (joyLY > 95) {  //Analog Left Move UP Value 100

  } else if (joyLY < -95) {  //Analog Left Move Down Value -100

  } else if (joyCross == 1) {  //Press Triangle Button
    
  } else if (joyCircle == 1) {  //Press Square Button
    
  } else if (joySquare == 1) {  //Press Circle Button
    
  } else if (joyTriangle == 1) {  //Press Cross Button
    
  } else if (joyL1 == 1) {  //Press L1 Button
    
  } else if (joyR1 == 1) {  //Press L2 Button
    
  } else if (joyL2 == 1) {  //Press R1 Button
    
  } else if (joyR2 == 1) {  //Press R2 Button
    
  } else if (joyUp == 1) {  //Press UP Button
    
  } else if (joyDown == 1) {  //Press DOWN Button
    
  } else if (joyRight == 1) {  //Press RIGHT Button
    
  } else if (joyLeft == 1) {  //Press LEFT Button
    
  } else {  // All Release
    
  }
}
