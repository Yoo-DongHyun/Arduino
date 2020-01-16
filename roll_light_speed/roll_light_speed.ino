void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println();
  digitalWrite(3,1);
  digitalWrite(5,0);
  delay(analogRead(A0));
  digitalWrite(3,0);
  digitalWrite(5,1);
  delay(analogRead(A0));
  
  
  // put your main code here, to run repeatedly:

}
