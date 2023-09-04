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

void testServo(int pin){
  display.setTextSize(4);
  display.setCursor(65, 50);
  display.setTextColor(TFT_MAGENTA);
  display.println("Servo");
  display.setTextColor(TFT_GREEN);
  display.setCursor(75, 100);
  display.println("Test");
  display.setTextFont(GLCD);
  display.setTextSize(4);
  display.setCursor(88, 150);
  display.setTextColor(0x0);
  display.println(vrshow);
  vrshow = vr(180);
  display.setTextSize(4);
  display.setCursor(88, 150);
  display.setTextColor(TFT_WHITE);
  display.println(vrshow);
  servo(pin,vrshow);
  delay(50);
}
