void setup()
{
  Serial.begin(9600);
  
  int a=0,b=1,c;
  
  
  for(int i = 1;i<=10;i++){
    
  
   c = a+b;
   a = b;
   b = c;
    
     Serial.print(a); 
    
   
  }
}

void loop()
{
  
}
