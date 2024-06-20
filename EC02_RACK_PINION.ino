#include <ESP32Servo.h>
Servo myservo;
int potpin=32;
int val;


void setup() {
  // put your setup code here, to run once:

myservo.attach(13);

}

void loop() {
  // put your main code here, to run repeatedly:
val= analogRead(potpin);
val= map(val,0,1023,0,360);
myservo.write(val);

delay(15);

}