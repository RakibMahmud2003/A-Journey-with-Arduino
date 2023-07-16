
void setup()
{
  Serial.begin(9600);
  
  int array[] = {3,4,5};
  
  int lenght = sizeof(array) / sizeof(array[0]);
  
  int max = array[0];
  
  for(int i = 0; i<lenght ; i++){
   
    if(array[i] > max){
     max = array[i]; 
    }
    
    
  }
  
  Serial.print("Largest value in this array is : ");
    Serial.println(max);
  
  
  
}
void loop()
{
  
}
