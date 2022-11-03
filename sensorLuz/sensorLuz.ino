int ldr;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  ldr = analogRead(0);
  Serial.println(ldr);
  if(ldr <=350) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }
}
