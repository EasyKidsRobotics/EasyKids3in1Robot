#include <EasyKids3in1Robot.h>

/*
  readSensor();
  setMinSensor(s1, s2, s3, s4, s5, s6, s7);
  setMaxSensor(s1, s2, s3, s4, s5, s6, s7);
  trackLineTime (Speed, KP, KD, Time);
  trackCrossLine(Speed, KP, KD);
  trackDicularLeft(Speed, KP, KD);
  trackDicularRight(Speed, KP, KD);
  trackTurnLeft();
  trackTurnRight();
*/

void setup() {
  EasyKids_Setup();
  setMinSensor(379, 360, 272, 503, 326, 318, 255); // Value Line Black
  setMaxSensor(1945, 2102, 1984, 2451, 1954, 2208, 1815); // Value Line White
  waitForStart();
  trackLineTime (50, 0.3, 0.23, 3000);
  trackCrossLine(50, 0.3, 0.23);
}

void loop() {
  
}
