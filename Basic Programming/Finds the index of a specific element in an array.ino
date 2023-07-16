
void setup()
{
  Serial.begin(9600);

}
void loop()
{
  if(Serial.available() > 0){
   
    int array[3] = {1,2,3};
    
    int input = Serial.parseInt();
    int index;
    for(int i = 0;i<3;i++){
      if(input == array[i])
        index = i;
     
      
    }
       
    Serial.print("The index of the element in the array is: ");
    Serial.println(index);
        
  }
}
