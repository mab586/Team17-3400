#include <Servo.h>

Servo servoL;
Servo servoR;

int pinL = 10;
int pinR = 11;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servoL.attach(pinL);
  servoR.attach(pinR);
}

void loop() {
  // put your main code here, to run repeatedly:
  servoL.write(180);
  servoR.write(0);
  delay(1000);
  servoL.write(0);
  servoR.write(180);
  delay(1000);
}
