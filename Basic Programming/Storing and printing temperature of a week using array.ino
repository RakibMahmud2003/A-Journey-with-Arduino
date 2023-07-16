
void setup()
{
  Serial.begin(9600);
  
  int temp[] = {35,34,30,37,35,32,34};
  
  Serial.print("Saturday: ");
  Serial.print(temp[0]);
  Serial.println(" Degrees");
  
  Serial.print("Sunday: ");
  Serial.print(temp[1]);
  Serial.println(" Degrees");
  
  Serial.print("Monday: ");
  Serial.print(temp[2]);
  Serial.println(" Degrees");
  
  Serial.print("Tuesday: ");
  Serial.print(temp[3]);
  Serial.println(" Degrees");
  
  Serial.print("Wednesday: ");
  Serial.print(temp[4]);
  Serial.println(" Degrees");
  
  Serial.print("Thursday: ");
  Serial.print(temp[5]);
  Serial.println(" Degrees");
  
  Serial.print("Friday: ");
  Serial.print(temp[6]);
  Serial.println(" Degrees");
  
  
  
}
void loop()
{
  
}
