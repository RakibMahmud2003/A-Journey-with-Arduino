
void setup()
{
  Serial.begin(9600);
  
  int m = Max(5,10,15);
  
  
  Serial.print(m);
  Serial.print(" is Maximum");
  
  }
  
  
void loop()
{
  
}

int Max(int a, int b, int c){
  if(a>b && a>c){
    return a;
  }
  else if(b>c){
    return b;
  }
  else{
   return c; 
  }
    
}
  
