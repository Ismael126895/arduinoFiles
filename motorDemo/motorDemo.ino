int pin7=7;
int pin8 =8;
int pin11 =11;
void setup(){
  Serial.begin(9600);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
 
  
}
void loop(){
  
   digitalWrite(pin7,HIGH);
  digitalWrite(pin8,LOW);
  analogWrite(pin11,255);
}
