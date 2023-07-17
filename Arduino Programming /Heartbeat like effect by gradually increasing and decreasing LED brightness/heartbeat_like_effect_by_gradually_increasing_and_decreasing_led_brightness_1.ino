

void setup(){
 
  pinMode(11,OUTPUT);
  
  
}

void loop(){
 
  LED_Brightness();
}

void LED_Brightness(){
 
  for(int i = 0; i<255;i+=20){
 analogWrite(11,i);
    delay(50);
  }
  
  for(int j = 255;j>0;j-=20){
    analogWrite(11,j);
    delay(50);
  
  }
 
}