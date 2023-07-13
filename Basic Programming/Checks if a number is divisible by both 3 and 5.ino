
void setup()
{
	Serial.begin(9600);
  	
  	int a = 15;
  
  if(a%3 ==0 && a%5 ==0){
   
    Serial.print(a);
    Serial.print(" is divisible by both 3 and 5");
    
  }
                 
	else{
      
     Serial.print(a);
     Serial.print(" is not divisible by both 3 and 5");
      
	}
  
}
void loop()
{
  
}
                
