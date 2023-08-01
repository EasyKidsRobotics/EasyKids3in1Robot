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
#include "EasyKids3in1_Controller.h"

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
void EasyKidsJoystick_Setup(){
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
    Serial.printf("Firmware: %s\n", BP32.firmwareVersion());
    const uint8_t *addr = BP32.localBdAddress();
    Serial.printf("BD Addr: %2X:%2X:%2X:%2X:%2X:%2X\n", addr[0], addr[1], addr[2],
                addr[3], addr[4], addr[5]);
    BP32.setup(&onConnectedGamepad, &onDisconnectedGamepad);
    delay(10);
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
    pwm.setPWMFreq(5000);
    pwm.setPWM(0, 0, 0);
    pwm.setPWM(1, 0, 0);
    pwm.setPWM(2, 0, 0);
    pwm.setPWM(3, 0, 0);
    pwm.setPWM(4, 0, 0);
    pwm.setPWM(5, 0, 0);
    pwm.setPWM(6, 0, 0);
    pwm.setPWM(7, 0, 0);
}
