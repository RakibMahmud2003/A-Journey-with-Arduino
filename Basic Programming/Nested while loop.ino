
void setup()
{
  Serial.begin(9600);
  
  while(1){
    if(Serial.read() == 'g'){
      while(1){
      Serial.println("Loop Running!");
      
      if(Serial.read() == 's'){
       break; 
      }
    }
    
    Serial.println("Loop Stopped!");
  }
}
}
void loop()
{
  
}
