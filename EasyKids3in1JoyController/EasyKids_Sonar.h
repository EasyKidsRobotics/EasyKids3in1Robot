// ------ Ultrasonic Pin ------
#define trigPin 17
#define echoPin 5

// ------ Function microsecondsToCentimeters ------
long microsecondsToCentimeters(long microseconds)
{
  return microseconds / 29 / 2;
}

// ------ Function sonar ------
float sonar()
{
  long duration;
  float distanceCm;
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input

  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance
  distanceCm = microsecondsToCentimeters(duration);

  return distanceCm;
}