#include "EasyKids3in1_Battery.h"
#include "EasyKids3in1_Buzzer.h"
#include "EasyKids3in1_IO.h"
#include "EasyKids3in1_LCD.h"
#include "EasyKids3in1_Motor.h"
#include "EasyKids3in1_NeoPixel.h"
#include "EasyKids3in1_Sonar.h"
#include "EasyKids3in1_Switch.h"
#include "EasyKids3in1_VR.h"
#include "EasyKids3in1_PID.h"
#include <Bluepad32.h>

GamepadPtr joystick[BP32_MAX_GAMEPADS];

void EasyKids_Setup(){
    Serial.begin(115200);
    
    display.begin();
    displayClear();
    rgbSetBrightness(20);
    rgbFill(BLACK);
    rgbFillCar(BLACK);
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
    delay(10);
}
