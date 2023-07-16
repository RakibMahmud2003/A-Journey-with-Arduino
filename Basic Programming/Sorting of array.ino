
void setup()
{
  Serial.begin(9600);
  
  int array[5] = {4,3,2,5,1};
  int temp,i,j;
  
  Serial.print("Before Sorting : ");
  
  for( i = 0; i<5 ; i++){
   Serial.print(array[i]); 
  }
  
  
  for(i = 0;i<5;i++){
    for(j = i+1; j<5 ; j++){
      if(array[i]>array[j]){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  Serial.println("After Sorting: ");
  for(i=0 ; i<5 ; i++){
   Serial.print(array[i]); 
  }
  
}
void loop()
{
  
}
