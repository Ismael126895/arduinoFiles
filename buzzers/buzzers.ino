int potVal;
int buzzPin=8;
int potPin=A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(potPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(potVal);
    potVal=analogRead(potPin);
    while(potVal>900){
      digitalWrite(buzzPin,HIGH);
      potVal=analogRead(potPin);
      Serial.println(potVal);
      }
      digitalWrite(buzzPin,LOW);
}
