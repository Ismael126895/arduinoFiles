const int sensorPin=A0;
const int low = 20;
const int high = 800;

const int minDuration=100;
const int maxDuration=1000;
void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int rate = analogRead(sensorPin);
  rate=map(rate,low,high,minDuration,maxDuration);
  rate=constrain(rate,minDuration,maxDuration);
  Serial.println(rate);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(rate);
  digitalWrite(LED_BUILTIN,LOW); 
  delay(rate);
}
