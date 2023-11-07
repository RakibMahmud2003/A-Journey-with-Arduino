void setup()
{
 pinMode(6,OUTPUT);
 pinMode(11,OUTPUT);
}

void loop()
{
  int temp = analogRead(A0);
  
  analogWrite(6,temp);
}
