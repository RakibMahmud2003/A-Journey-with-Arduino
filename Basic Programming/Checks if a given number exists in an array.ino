
void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
  if(Serial.available() > 0){
   
    int array[3] = {1,2,3};
    
    int input = Serial.parseInt();
    int flag = 0;
    for(int i = 0;i<3;i++){
      if(input == array[i])
        flag = 1;
     
      
    }
         
         if(flag == 1){
           
           Serial.println("The element is present");
         }
         
         else{
          Serial.println("The element is not present"); 
         }
        
  }
}
