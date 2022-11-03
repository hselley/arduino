#include <Stepper.h>
Stepper mi_stepper(64, 8, 9, 10, 11);
int aleatorio;

void setup() {
  Serial.begin(9600);
  mi_stepper.setSpeed(100);

  pinMode(12, INPUT);
  pinMode(53, OUTPUT);

  digitalWrite(12, LOW);
  digitalWrite(53, LOW);
  mi_stepper.step(2048); // 2048 => Una vuelta completa
}

void loop() {
  if(digitalRead(12) != 0) {
    digitalWrite(53, HIGH);
    aleatorio = random(0, 2049);
    Serial.println(aleatorio);
    mi_stepper.step(2048 + aleatorio);
    digitalWrite(53, LOW);  
  }
  delay(1000);
}
