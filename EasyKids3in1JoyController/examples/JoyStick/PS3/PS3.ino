#include <EasyKids3in1JoyController.h>
void setup()
{
    EasyKids_Setup();
    PS3_Setup();
    showAddressLcd();
    // put your setup code here, to run once:
    ledFillColor(RED);
}

void loop()
{
    // put your main code here, to run repeatedly:
    if (PS3.isConnected())
    {
        ledFillColor(GREEN);
        Serial.print("Cross=");
        Serial.print(PS3_Cross());
        Serial.print(" ");
        Serial.print("Square=");
        Serial.print(PS3_Square());
        Serial.print(" ");
        Serial.print("Circle=");
        Serial.print(PS3_Circle());
        Serial.print(" ");
        Serial.print("Triangle=");
        Serial.print(PS3_Triangle());
        Serial.print(" ");
        delay(50);
        Serial.print("JoyUp=");
        Serial.print(PS3_Up());
        Serial.print(" ");
        Serial.print("JoyRight=");
        Serial.print(PS3_Right());
        Serial.print(" ");
        Serial.print("JoyDown=");
        Serial.print(PS3_Down());
        Serial.print(" ");
        Serial.print("JoyLeft=");
        Serial.print(PS3_left());
        Serial.print(" ");
        delay(50);
        Serial.print("L1=");
        Serial.print(PS3_L1());
        Serial.print(" ");
        Serial.print("L2=");
        Serial.print(PS3_L2());
        Serial.print(" ");
        Serial.print("R1=");
        Serial.print(PS3_R1());
        Serial.print(" ");
        Serial.print("R2=");
        Serial.print(PS3_R2());
        Serial.print(" ");
        delay(50);

        Serial.print("L_Analog_X=");
        Serial.print(PS3_LX());
        Serial.print(" ");
        Serial.print("L_Analog_Y=");
        Serial.print(PS3_LY());
        Serial.print(" ");

        Serial.print("R_Analog_X=");
        Serial.print(PS3_RX());
        Serial.print(" ");
        Serial.print("R_Analog_Y=");
        Serial.print(PS3_RY());
        Serial.println(" ");
        delay(50);
    }
}