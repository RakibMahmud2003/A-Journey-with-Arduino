int button = 4;
int motor = 6;
int currentState;
void setup()
{
  pinMode(motor,OUTPUT);
  pinMode(button,INPUT);
}

void loop()
{
  currentState = digitalRead(button);
  
  if(currentState == LOW){
    digitalWrite(motor, HIGH);
  }
  else if(currentState == HIGH){
    digitalWrite(motor, LOW);
  }
  delay(50);
}
