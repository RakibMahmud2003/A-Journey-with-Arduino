
int gasSensor = A0, flameSensor=7, buzzer=5;

void setup() {
    Serial.begin(9600);
    pinMode(buzzer,OUTPUT);
    pinMode(flameSensor,INPUT);
}

void loop() {

    if(digitalRead(flameSensor)== 0){
      Serial.print("Fire Detected");
      digitalWrite(buzzer,HIGH);
    }
    else{
      Serial.print("No Fire Detected");
      digitalWrite(buzzer,LOW);
    }

    //Serial.println(analogRead(gasSensor)){

    if(analogRead(gasSensor)>200){
      Serial.print(" Smoke Detected");
      digitalWrite(buzzer,HIGH);
    }
    else{
      Serial.print(" No Smoke Detected");
      digitalWrite(buzzer,LOW);
    }

    Serial.println("");

}
