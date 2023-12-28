int relayPin = 12;
int pir = 7;

void setup()
{	
  	Serial.begin(9600);
 	pinMode(relayPin,OUTPUT);
  	pinMode(pir, INPUT);
}

void loop()
{
  
  if(digitalRead(pir)==HIGH){
    Serial.println("Motion Detected");
    digitalWrite(relayPin,HIGH);
  }
  else{
    Serial.println("No Motion Detected");
    digitalWrite(relayPin,LOW);
  }
}
