#include <EasyKids3in1Robot.h>

/*
  readSensor();
  setSensorMin(s1, s2, s3, s4, s5, s6, s7);
  setSensorMax(s1, s2, s3, s4, s5, s6, s7);
  trackLineTime (Speed, KP, KD, Time);
  trackCrossLine(Speed, KP, KD);
  trackDicularLeft(Speed, KP, KD);
  trackDicularRight(Speed, KP, KD);
  trackTurnLeft();
  trackTurnRight();
*/

#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
  display3in1();
  setSensorMin(975, 900, 385, 1229, 912, 723, 688);  // Value Line Black
  setSensorMax(4023, 3875, 2380, 4065, 4023, 3460, 3226);  // Value Line White
  pwm.setPWMFreq(5000);
  
}

void loop() {

  // readSensor();  //Show Value 7 Sensor via LCD Display
  waitForStart();
  trackLineTime(20, 1, 1, 1000);
  trackLineTime(30, 1, 1, 5000);
  trackLineTime(35, 1, 1, 5000);
 
}

