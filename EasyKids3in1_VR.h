// ------ VR Pin ------
#define VR 34
int vrshow;
// ------ Function ------
int vr(int setValue)
{
  int valueVr = analogRead(VR);
  int mapValue = map(valueVr, 0, 4095, setValue, 0);
  return mapValue;
}

void servoTest(int setValue, int x, int y, uint32_t color)
{
  display.setTextFont(GLCD);
  display.setTextSize(4);
  display.setCursor(x, y);
  display.setTextColor(0x0);
  display.println(vrshow);
  vrshow = vr(setValue);
  display.setTextSize(4);
  display.setCursor(x, y);
  display.setTextColor(color);
  display.println(vrshow);
  servo(1,vrshow);
  delay(50);
}
