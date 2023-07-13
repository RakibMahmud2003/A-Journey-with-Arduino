void setup()
{
 Serial.begin(9600);
  
  int number = 5;
  int factorial=1;
  for(int i=1; i<=number; i++){ 
      factorial = factorial * i;
      
      }
  
  Serial.print("Factorial is:" );
	  Serial.println(factorial);
}

             
void loop()
{
 
}
