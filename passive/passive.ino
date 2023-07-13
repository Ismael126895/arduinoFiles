int buzzPin=8;
int potVal;
int potPin=A3;
int toneVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,INPUT);
}

void loop() {
  potVal=analogRead(potPin);
  toneVal=(9940./1023.)*potVal+60;
  // put your main code here, to run repeatedly:
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal);
}
