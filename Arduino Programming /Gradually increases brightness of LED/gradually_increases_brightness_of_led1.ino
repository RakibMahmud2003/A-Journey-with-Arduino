

void setup(){
 
  pinMode(11,OUTPUT);
  
  
}

void loop(){
 
  LED_Brightness();
}

void LED_Brightness(){
 
  for(int i = 0; i<255;i+=5){
 analogWrite(11,i);
    delay(50);
  }
  

 
}