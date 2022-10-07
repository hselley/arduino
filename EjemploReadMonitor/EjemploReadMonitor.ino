String comando;

void setup() {
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() > 0) {
    comando = Serial.readStringUntil('\n');
    Serial.println(comando);
    if(comando=="Hola") {
      Serial.println("mundo");
    } else {
      Serial.println("cruel");
    }
  }
}
