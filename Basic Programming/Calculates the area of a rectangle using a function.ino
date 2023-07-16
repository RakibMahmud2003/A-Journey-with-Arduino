
void setup()
{
  Serial.begin(9600);
  
  int a = Rectangle(5,10);
  
  Serial.print("Area is: ");
  Serial.println(a);
  
  }
  
  
void loop()
{
  
}

int Rectangle(int a, int b){
  
  int area = a*b;
  
  return area;
  
}

  
