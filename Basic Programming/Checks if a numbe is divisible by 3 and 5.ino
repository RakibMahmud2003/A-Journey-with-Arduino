
void setup()
{
  Serial.begin(9600);
  
  int n = Check(15);
  
  
  Serial.print(n);
 
  
  }
  
  
void loop()
{
  
}


int Check(int num){
 
  if(num %3 == 0 && num %5 == 0){
   Serial.print(" is divisible by 3 and 5"); 
  }
  else{
    Serial.print(" is not divisible by 3 and 5");
  }
                                
  return num;
                   
}
