

void setup(){
 
  pinMode(11,OUTPUT);
  
  
}

void loop(){
 
  LED_Blink();
}

void LED_Blink(){
 
 digitalWrite(11,HIGH);
 delay(200);
 digitalWrite(11,LOW);
 delay(200);
  
  digitalWrite(11,HIGH);
 delay(200);
 digitalWrite(11,LOW);
 delay(200);
  
  digitalWrite(11,HIGH);
 delay(200);
 digitalWrite(11,LOW);
 delay(2000);
  
  
  
 
}