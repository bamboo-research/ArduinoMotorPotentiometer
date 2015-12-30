/*
 * Control the speed of a motor with a Potentiometer
 * Clayton Walker
 */

int potPin = A0;
int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {

  int potValue = analogRead(potPin);
  
  // map value from 0-1023 to 0-255
  int speed = map(potValue, 0, 1023, 0, 255);

  analogWrite(motorPin, speed);
}
