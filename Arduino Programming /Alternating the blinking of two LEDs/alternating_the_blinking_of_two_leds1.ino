

void setup(){
 
  pinMode(11,OUTPUT);
  pinMode(5,OUTPUT);
  
}

void loop(){
 
  LED_Switch();
}

void LED_Switch(){
 
 digitalWrite(11,HIGH);
 delay(1000);
 digitalWrite(11,LOW);
 
  
  digitalWrite(5,HIGH);
 delay(1000);
 digitalWrite(5,LOW);
 
  
  
 
}