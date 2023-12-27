
int trigPin = 3;
int echoPin = 4;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}

void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  
  int duration = pulseIn(echoPin,HIGH);
  
  int distance = duration * 0.034 / 2;
  
  Serial.print("Distance");
  Serial.println(distance);
}
