int pin7=7;//turn the rotor clockwise
int pin8 =8;//turning the rotor anticlockwise
int pin11 =11;//adjust the speed of the motor
int potVal = 0;//collects potentiometer values
int mSpeed = 0;//converts potentiometer values to speed
void setup(){
  Serial.begin(9600);
  pinMode(pin7,OUTPUT);
  pinMode(pin8,OUTPUT);
  Serial.begin(9600);
  
}
void loop(){
  
  potVal=analogRead(A5);
  Serial.print("pot value: ");
  Serial.println(potVal);
  
  mSpeed=(255./1023.)*potVal;
  
  Serial.print("Motor Speed: ");
  Serial.println(mSpeed);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,HIGH);
  analogWrite(pin11,mSpeed);
  delay(500);
}
