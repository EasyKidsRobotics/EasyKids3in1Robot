#include <EasyKids3in1Robot.h>

void setup() {
  EasyKids_Setup();
}

void loop() {
  if ((sw_Start() == 0) == 0) {
    while (1) {
      Run_fast(5000);
    }
  }
}
