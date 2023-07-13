int bluePin=8;
int greenPin=9;
int redPin=10;
String mycolor;
String msg="What colour do you want?";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop() {
 
//  digitalWrite(bluePin,HIGH);
//  digitalWrite(redPin,LOW);
//  digitalWrite(greenPin,LOW);
//  delay(2000);
//  digitalWrite(greenPin,HIGH);
//  digitalWrite(bluePin,LOW);
//  digitalWrite(redPin,LOW);  
//  delay(2000);
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  delay(2000);
  analogWrite(redPin,255);
  analogWrite(greenPin,125);
  analogWrite(bluePin,0);
  delay(2000);
}
