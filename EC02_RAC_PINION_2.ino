#include <ESP32Servo.h>
#include <BluetoothSerial.h>
Servo myservo;
int potpin=32;
int val;
int trig_pin=25;
int k;
BluetoothSerial SerialBT;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  SerialBT.begin("ESP32_Blue_Tooth");
myservo.attach(13);
}

void loop() {
  // put your main code here, to run repeatedly:

}