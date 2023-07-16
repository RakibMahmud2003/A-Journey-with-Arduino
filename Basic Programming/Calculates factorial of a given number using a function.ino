
void setup()
{
  Serial.begin(9600);
  int f = Factorial(5);
  Serial.print(f);
  
  }
  
  
void loop()
{
  
}

int Factorial (int number){
 
  int fact = 1;
  
  for(int i=1; i<=number; i++){ 
      fact = fact * i;
  }
  
  return fact;
  
}
