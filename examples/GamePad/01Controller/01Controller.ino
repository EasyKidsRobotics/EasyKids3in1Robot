#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
  display3in1();
  welcomeSong();
  Serial.printf("Firmware: %s\n", BP32.firmwareVersion());
  const uint8_t *addr = BP32.localBdAddress();
  Serial.printf("BD Addr: %2X:%2X:%2X:%2X:%2X:%2X\n", addr[0], addr[1], addr[2],
                addr[3], addr[4], addr[5]);
  BP32.setup(&onConnectedGamepad, &onDisconnectedGamepad);
  BP32.forgetBluetoothKeys();
}

void loop() {
  BP32.update();
  for (int i = 0; i < BP32_MAX_GAMEPADS; i++) {
    GamepadPtr joy = joystick[i];
    if (joy && joy->isConnected()) {
      int joyLX = map(joy->axisX(), -508, 512, -100, 100);
      int joyLY = map(joy->axisY(), -508, 512, 100, -100);
      int joyRX = map(joy->axisRX(), -508, 512, -100, 100);
      int joyRY = map(joy->axisRY(), -508, 512, 100, -100);
      if (joyLX > 90) {       //Analog Left Move Right Value 100
       // Statement
      }
      else if (joyLX < -90) { //Analog Left Move Left Value -100
       // Statement
      }
      else if (joyRX > 90) {  //Analog Right Move Right Value 100
       // Statement
      }
      else if (joyRX < -90) { //Analog Right Move Left Value -100
       // Statement
      }
      else if (joyRY > 90) { //Analog Right Move UP Value 100
       // Statement
      }
      else if (joyRY < -90) { //Analog Right Move Down Value -100
       // Statement
      }
      else if (joyLY > 90) {  //Analog Left Move UP Value 100
       // Statement
      }
      else if (joyLY < -90) { //Analog Left Move Down Value -100
       // Statement
      }
      else if (joy->buttons() == 8) { // Triangle 
      // Statement
      }
      else if (joy->buttons() == 4) { // Square
       // Statement
      }
      else if (joy->buttons() == 2) { // Circle
       // Statement
      }
      else if (joy->buttons() == 1) { // Cross
       // Statement
      }
      else if (joy->buttons() == 16) { // L1
       // Statement
      }
      else if (joy->buttons() == 64) { // L2
       // Statement
      }
      else if (joy->buttons() == 32) { // R1
       // Statement
      }
      else if (joy->buttons() == 128) { // R2
       // Statement
      }
      else if (joy->dpad() == 1) { // UP
       // Statement
      }
      else if (joy->dpad() == 2) { // DOWN
        // Statement
      }
      else if (joy->dpad() == 4) { // RIGHT
       // Statement
      }
      else if (joy->dpad() == 8) { // LEFT
       // Statement
      }
      else {
       // Statement
      }
    }
  }
  //delay(20);
}

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