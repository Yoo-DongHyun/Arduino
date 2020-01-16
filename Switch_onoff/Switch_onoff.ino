void setup() {
  pinMode(8,OUTPUT);
  pinMode(6,INPUT);
}

void loop() {
  if(digitalRead(6)==1){
    digitalWrite(8,1);
    delay(100);
  }
  else{
    digitalWrite(8,0);
    delay(100);
  }
}
