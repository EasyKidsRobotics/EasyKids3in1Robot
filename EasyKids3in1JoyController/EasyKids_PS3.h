#include "Ps3Controller.h"

//String address = joy.getAddress();

// ------ Function joystick_begin ------
void PS3_Setup()
{
  PS3.begin();
}
void showAddressLcd(){
  String address = PS3.getAddress();
  display.setCursor(23, 90);
  display.setTextSize(3);
  display.setTextColor(TFT_CYAN );
  display.print("MAC Address");
  display.setCursor(17, 120);
  display.setTextSize(2);
  display.setTextColor(TFT_GREEN);
  display.print(address);
  Serial.println(address);
}
// ------ JoyValue ------
int PS3_Cross()
{
  return PS3.data.button.cross;
}

int PS3_Square()
{
  return PS3.data.button.square;
}

int PS3_Triangle()
{
  return PS3.data.button.triangle;
}

int PS3_Circle()
{
  return PS3.data.button.circle;
}

int PS3_Up()
{
  return PS3.data.button.up;
}

int PS3_Down()
{
  return PS3.data.button.down;
}

int PS3_Right()
{
  return PS3.data.button.right;
}

int PS3_left()
{
  return PS3.data.button.left;
}

int PS3_L1()
{
  return PS3.data.button.l1;
}

int PS3_L2()
{
  return PS3.data.button.l2;
}

int PS3_R1()
{
  return PS3.data.button.r1;
}

int PS3_R2()
{
  return PS3.data.button.r2;
}

int PS3_Select()
{
  return PS3.data.button.select;
}

int PS3_Start()
{
  return PS3.data.button.start;
}

int PS3_PS()
{
  return PS3.data.button.ps;
}

int PS3_LX()
{
  int LX = map(PS3.data.analog.stick.lx, -127, 127, -100, 100);
  return LX;
}

int PS3_LY()
{
  int LY = map(PS3.data.analog.stick.ly, -127, 127, 100, -100);
  return LY;
}

int PS3_RX()
{
  int RX = map(PS3.data.analog.stick.rx, -127, 127, -100, 100);
  return RX;
}

int PS3_RY()
{
  int RY = map(PS3.data.analog.stick.ry, -127, 127, 100, -100);
  return RY;
}