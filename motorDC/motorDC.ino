void setup() {
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  analogWrite(2, 50);
  delay(200);
  analogWrite(2, 20);
  delay(20);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
}
