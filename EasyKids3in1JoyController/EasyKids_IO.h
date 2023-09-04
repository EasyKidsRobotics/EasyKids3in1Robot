// ------ Analog Pin ------
#define A0 26
#define A1 13
#define A2 14
#define A3 15
#define A4 27
#define A5 32
#define A6 33
#define D0 26
#define D1 13
#define D2 14
#define D3 15
#define D4 27
#define D5 32
#define D6 33

// ------ Function Analog------
int analog(int pin)
{
  if (pin == 0)pin = A0;
  else if (pin == 1)pin = A1;
  else if (pin == 2)pin = A2;
  else if (pin == 3)pin = A3;
  else if (pin == 4)pin = A4;
  else if (pin == 5)pin = A5;
  else if (pin == 6)pin = A6;
  return analogRead(pin);
}
// ------ Function DigitalOut ------
void digitalOut(int pin, int state)
{
  if (pin == 0)pin = A0;
  else if (pin == 1)pin = A1;
  else if (pin == 2)pin = A2;
  else if (pin == 3)pin = A3;
  else if (pin == 4)pin = A4;
  else if (pin == 5)pin = A5;
  else if (pin == 6)pin = A6;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, state);
}
// ------ Function DigitalIn ------
int digitalIn(int pin)
{
  if (pin == 0)pin = A0;
  else if (pin == 1)pin = A1;
  else if (pin == 2)pin = A2;
  else if (pin == 3)pin = A3;
  else if (pin == 4)pin = A4;
  else if (pin == 5)pin = A5;
  else if (pin == 6)pin = A6;
  pinMode(pin, INPUT);
  return digitalRead(pin);
}
// ------ Function DigitalIn_Pullup ------
int digitalIn_Pullup(int pin)
{
  if (pin == 0)pin = A0;
  else if (pin == 1)pin = A1;
  else if (pin == 2)pin = A2;
  else if (pin == 3)pin = A3;
  else if (pin == 4)pin = A4;
  else if (pin == 5)pin = A5;
  else if (pin == 6)pin = A6;
  pinMode(pin, INPUT_PULLUP);
  return digitalRead(pin);
}
