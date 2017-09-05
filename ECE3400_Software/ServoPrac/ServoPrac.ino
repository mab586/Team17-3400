#include <Servo.h>

Servo servo1;

int servoPin = 6;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);
  servo1.write(90);
}



void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);   // read the input pin
  Serial.println(val);
  
}
