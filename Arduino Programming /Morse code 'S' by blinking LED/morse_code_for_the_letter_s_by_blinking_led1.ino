

void setup(){
 
  pinMode(11,OUTPUT);
  
}

void loop(){
 
  MorseCodeS();
}

void MorseCodeS(){
 
 digitalWrite(11,HIGH);
 delay(300);
 digitalWrite(11,LOW);
 delay(300);
  
  digitalWrite(11,HIGH);
 delay(300);
 digitalWrite(11,LOW);
 delay(300);
  
  digitalWrite(11,HIGH);
 delay(300);
 digitalWrite(11,LOW);
 delay(1000);
  
  
 
  
  
 
  
}