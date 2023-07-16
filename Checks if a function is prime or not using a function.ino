
void setup()
{
  Serial.begin(9600);
  int n = Check_Prime(5);
  Serial.print(n);
  
  }
  
  
void loop()
{
  
}

int Check_Prime( int num){
  
  int flag = 0;
 
  if ( num == 0 || num ==1){
   flag = 1 ; 
  }
  
  
  for(int i = 2; i<= num /2; i++){
    if(num %i  == 0){
      flag =1;
      break;
    }
  }
  
  if(flag == 0){
   Serial.println("Prime Number");
  }
  else{
   Serial.println("Not a Prime Number");
  }
  
	return num;
      
}
