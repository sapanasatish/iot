
  int flame_sensor=9;
  int buzzer=6;
  void setup(){
    pinMode(flame_sensor,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int data=digitalRead(flame-sensor);
  if(data==1)
  {
     digitalWrite(buzzer, HIGH);

  }
  else

  {
    digitalWrite(buzzer, LOW);
  }
   Serial.println(data);

}
