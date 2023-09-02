#include <EasyKids3in1.h>

/* 
Connect Analog 7 Sensor >>> A6 A5 A4 A3 A2 A1 A0 
Connect Motor Left  >>> M1
Connect Motot Right >>> M2

<<<<< Command >>>>>
  readSensor();
  setSensorMin(s0, s1, s2, s3, s4, s5, s6);
  setSensorMax(s0, s1, s2, s3, s4, s5, s6);
  lineFollowTime (Speed, KP, KD, Time);
  lineFollowCross(Speed, KP, KD);
  lineDicularLeft(Speed, KP, KD);
  lineDicularRight(Speed, KP, KD);
  lineTurnLeft(Speed);
  lineTurnRight(Speed);
*/

void setup() {
  EasyKidsLineFollow_Setup();
  display3in1();
  setSensorMin(975, 900, 385, 1229, 912, 723, 688);  // Black Line Value >>> A0 A1 A2 A3 A4 A5 A6
  setSensorMax(4023, 3875, 2380, 4065, 4023, 3460, 3226);  // White Line Value >>> A0 A1 A2 A3 A4 A5 A6
}

void loop() {

  // readSensor();  //Show Value 7 Sensor via LCD Display
  waitForStart(); 
  beep(); 
  lineFollowTime(20, 1.0, 1.0, 1000); //lineFollowTime (Speed, KP, KD, Time(ms));
  lineFollowCross(30, 1.0, 1.0); //lineFollowCross(Speed, KP, KD);
  lineFollowTime(35, 1.0, 1.0, 5000); //lineFollowTime (Speed, KP, KD, Time(ms));
  lineTurnLeft(30);// lineTurnLeft(Speed);
 
}

