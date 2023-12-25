int tempPin = A0;
int buzzerPin = 9;
void setup()
{
 Serial.begin(9600);
 pinMode(buzzerPin , OUTPUT);
}

void loop()
{
  int temp = temperature();
  Serial.println(temp);
  
  if(temp > 100 || temp < 10){
    digitalWrite(buzzerPin,HIGH);
    Serial.println("Buzzer is On");
  }
  else{
    digitalWrite(buzzerPin,LOW);
    Serial.println("Buzzer if Off");
  }
}

int temperature(){
  int t = analogRead(tempPin);
  return map(t,20,358,-40,125);
}
