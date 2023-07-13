int lightPen=A0;
int buzzPin=8;
int lightVal;
int toneVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(lightPen,INPUT);
  pinMode(buzzPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal=analogRead(lightPen);
  toneVal=(886./77.)*lightVal+100;
  Serial.println(lightVal);
  Serial.println(toneVal);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(toneVal);
}
