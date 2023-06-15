// ------ Switch Pin ------
#define sw 0

// ------ Function Wait_Start ------
void waitForStart() {
  while (digitalRead(0) == 1) {}
}
// ------ Function Sw_Start ------
int sw_Start()
{
  return digitalRead(0);
}
