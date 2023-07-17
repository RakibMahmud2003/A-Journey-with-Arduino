

void setup(){
 
  pinMode(11,OUTPUT);
  
  LED_Blink();
  
}

void loop(){
 

}

void LED_Blink(){
 
  for(int i =1; i<=5;i++){
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11,LOW);
    delay(500);
  }
}