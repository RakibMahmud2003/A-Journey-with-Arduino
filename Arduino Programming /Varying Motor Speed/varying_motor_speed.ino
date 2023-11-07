void setup()
{
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  for(int i = 0; i<255 ; i++){
    analogWrite(6,i);
    delay(50);
}
  for(int i = 255; i>0;i--){
    analogWrite(6,i);
    delay(50);
  }
}
