int bluePin=8;
int greenPin=9;
int redPin=10;
String mycolor;
String msg="What colour do you want?";

void setup()
{
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
}

void loop()
{
  Serial.println(msg);
  if(Serial.available()>0)
  {
    mycolor=Serial.readString();
    mycolor.trim();
  }
  if(mycolor=="blue")
  {
    Serial.println("I am blue");
    digitalWrite(bluePin,HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
  }
  if(mycolor=="green")
  {
    Serial.println("I am green");
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,HIGH);
  }
  if(mycolor=="red")
  {
    Serial.println("I am red");
    digitalWrite(bluePin,LOW);
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  if(mycolor=="off")
  {
    Serial.println("I am off");
    digitalWrite(redPin,LOW);
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
  }
}
