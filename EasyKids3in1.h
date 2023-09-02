#include "EasyKids_Battery.h"
#include "EasyKids_Buzzer.h"
#include "EasyKids_IO.h"
#include "EasyKids_LCD.h"
#include "EasyKids_Motor.h"
#include "EasyKids_NeoPixel.h"
#include "EasyKids_Sonar.h"
#include "EasyKids_Switch.h"
#include "EasyKids_VR.h"
#include "EasyKids_PID.h"
#include "EasyKids_Gamepad.h"

void EasyKids_Setup(){
    Serial.begin(115200);
    display.begin();
    displayClear();
    rgb.begin();
    rgbCar.begin();
    ledSetBrightness(20);
    ledCarSetBrightness(20);
    ledFillColor(BLACK);
    ledCarFillColor(BLACK);
    pwm.begin();
    pinMode(sw, INPUT);
    pinMode(BUZZER, OUTPUT);
    pwm.setPWMFreq(50);
    pwm.setPWM(0, 0, 0);
    pwm.setPWM(1, 0, 0);
    pwm.setPWM(2, 0, 0);
    pwm.setPWM(3, 0, 0);
    pwm.setPWM(4, 0, 0);
    pwm.setPWM(5, 0, 0);
    pwm.setPWM(6, 0, 0);
    pwm.setPWM(7, 0, 0);
}
void EasyKidsLineFollower_Setup(){
    Serial.begin(115200);
    display.begin();
    displayClear();
    rgb.begin();
    rgbCar.begin();
    ledSetBrightness(20);
    ledCarSetBrightness(20);
    ledFillColor(BLACK);
    ledCarFillColor(BLACK);
    pwm.begin();
    pinMode(sw, INPUT);
    pinMode(BUZZER, OUTPUT);
    pwm.setPWMFreq(1000);
    pwm.setPWM(0, 0, 0);
    pwm.setPWM(1, 0, 0);
    pwm.setPWM(2, 0, 0);
    pwm.setPWM(3, 0, 0);
    pwm.setPWM(4, 0, 0);
    pwm.setPWM(5, 0, 0);
    pwm.setPWM(6, 0, 0);
    pwm.setPWM(7, 0, 0);
}
