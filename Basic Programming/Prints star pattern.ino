
void setup()
{
  Serial.begin(9600);
  
  int space,k=0;
  
  for(int i =1;i<=5;i++, k=0){
    for(space = 1; space<= 5 - i ; space++){
      Serial.print(" ");
}
    
    while(k!= 2 *i -1){
     Serial.print("*");
      k++;
    }
    Serial.println("");
  }
}
void loop()
{
  
}
