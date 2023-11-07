int servo=11;

void setup()
{
  pinMode(servo, OUTPUT);
}

void loop()
{
  int pot = analogRead(A0);
  
  int value = map(pot, 0, 1023, 0, 255);
  
  analogWrite(servo, value);
}
