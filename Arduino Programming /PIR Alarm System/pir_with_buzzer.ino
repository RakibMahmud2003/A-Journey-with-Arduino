int pir = A0;
int buzzer = 9;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int pirValue = analogRead(pir);
  Serial.println(pirValue);
  
  if(pirValue > 1000){
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
}
