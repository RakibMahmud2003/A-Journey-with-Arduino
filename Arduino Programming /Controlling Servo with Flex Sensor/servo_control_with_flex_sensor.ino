#include<Servo.h>

int flexSensor = A0;
int servo = 3;
Servo myServo;

void setup()
{
  Serial.begin(9600);
  myServo.attach(servo);
}

void loop()
{
  int angle_value = angle();
  myServo.write(angle_value);
  Serial.println(angle_value);
}

int angle(){
 int sensor_value = analogRead(A0);
 return map(sensor_value,682,275,0,180);
}
