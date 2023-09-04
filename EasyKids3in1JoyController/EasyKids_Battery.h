// ------ Function Vbattery ------
float Vbattery()
{
  float Vbat = analogRead(35) * 3.3 / 4095 * (110000 + 15000) / 15000;

  return Vbat;
}

// ------ Function battery ------
float batteryPercent()
{
  float Vfull = 8.4;  // voltage of a fully charged battery
  float Vempty = 6.0; // voltage of an empty battery
  float Vbat = analogRead(35) * 3.3 / 4095 * (110000 + 15000) / 15000;
  int percentage = ((Vbat - Vempty) / (Vfull - Vempty)) * 100;
  return percentage;
}
