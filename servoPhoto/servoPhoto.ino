#include <Servo.h>
int lightPin=A0;
int lightVal;
int servoPin=9;
int servoPos;
int dt=500;
Servo lightServo;
void setup(){
  lightServo.attach(servoPin);
  pinMode(lightPin,INPUT);
  Serial.begin(9600);
}
void loop(){
  lightVal=analogRead(lightPin);
  servoPos=(3./16.)*lightVal-3.75;
  Serial.println(servoPos);
  lightServo.write(servoPos);
  delay(dt);
}
