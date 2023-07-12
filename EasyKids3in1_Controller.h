#include <Bluepad32.h>
int joyLX;
int joyLY;
int joyRX;
int joyRY;
int joyButton;
int joyCross;
int joyCircle;
int joySquare;
int joyTriangle;
int joyL1;
int joyL2;
int joyR1;
int joyR2;
int joyUp;
int joyDown;
int joyLeft;
int joyRight;
int joyStart;
int joySelect;
int joyPad;

GamepadPtr joystick[BP32_MAX_GAMEPADS];

void onConnectedGamepad(GamepadPtr gp) {
  bool foundEmptySlot = false;
  for (int i = 0; i < BP32_MAX_GAMEPADS; i++) {
    if (joystick[i] == nullptr) {
      Serial.printf("CALLBACK: Gamepad is connected, index=%d\n", i);
      GamepadProperties properties = gp->getProperties();
      Serial.printf("Gamepad model: %s, VID=0x%04x, PID=0x%04x\n",
                    gp->getModelName().c_str(), properties.vendor_id,
                    properties.product_id);
      joystick[i] = gp;
      foundEmptySlot = true;
      break;
    }
  }
  if (!foundEmptySlot) {
    Serial.println(
      "CALLBACK: Gamepad connected, but could not found empty slot");
  }
}

void onDisconnectedGamepad(GamepadPtr gp) {
  bool foundGamepad = false;
  for (int i = 0; i < BP32_MAX_GAMEPADS; i++) {
    if (joystick[i] == gp) {
      Serial.printf("CALLBACK: Gamepad is disconnected from index=%d\n", i);
      joystick[i] = nullptr;
      foundGamepad = true;
      break;
    }
  }
  if (!foundGamepad) {
    Serial.println(
      "CALLBACK: Gamepad disconnected, but not found in myGamepads");
  }
}

void JoyController() {
  BP32.update();
  for (int i = 0; i < BP32_MAX_GAMEPADS; i++) {
    GamepadPtr joy = joystick[i];
    if (joy && joy->isConnected()) {
      joyLX = map(joy->axisX(), -508, 512, -100, 100);
      joyLY = map(joy->axisY(), -508, 512, 100, -100);
      joyRX = map(joy->axisRX(), -508, 512, -100, 100);
      joyRY = map(joy->axisRY(), -508, 512, 100, -100);
      joyButton = joy->buttons();
      joyPad = joy->dpad();
      Serial.println(joyPad);
      if (joyButton == 1) {
        joyCross = 1;
      } else if (joyButton == 2) {
        joyCircle = 1;
      } else if (joyButton == 4) {
        joySquare = 1;
      } else if (joyButton == 8) {
        joyTriangle = 1;
      } else if (joyButton == 16) {
        joyL1 = 1;
      } else if (joyButton == 32) {
        joyR1 = 1;
      } else if (joyButton == 64) {
        joyL2 = 1;
      } else if (joyButton == 128) {
        joyR2 = 1;
      } else if (joyPad == 1) {
        joyUp = 1;
      } else if (joyPad == 2) {
        joyDown = 1;
      } else if (joyPad == 4) {
        joyRight = 1;
      } else if (joyPad == 8) {
        joyLeft = 1;
      }else {
        joyCross = 0;
        joyCircle = 0;
        joySquare = 0;
        joyTriangle = 0;
        joyL1 = 0;
        joyR1 = 0;
        joyL2 = 0;
        joyR2 = 0;
        joyUp = 0;
        joyDown = 0;
        joyRight = 0;
        joyLeft = 0;
      }
    }
  }
}
