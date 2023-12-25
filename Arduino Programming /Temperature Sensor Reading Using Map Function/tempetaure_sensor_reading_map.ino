int tempPin = A0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int temp = temperature();
  Serial.println(temp);
}

int temperature(){
  int t = analogRead(tempPin);
  return map(t,20,358,-40,125);
}
