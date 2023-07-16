
void setup()
{
  Serial.begin(9600);
  
  int s = Sum(5,10);
  
  Serial.print("Sum is: ");
  Serial.println(s);
  
  }
  
  
void loop()
{
  
}

int Sum(int a, int b){
  
  int sum = a+b;
  
  return sum;
  
}

  
