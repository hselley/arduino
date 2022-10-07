#define ROJO 5
#define VERDE 6
#define AZUL 7

int pot;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ROJO, OUTPUT); // Red
  pinMode(VERDE, OUTPUT); // Green
  pinMode(AZUL, OUTPUT); // Blue

}
  
// the loop function runs over and over again forever
void loop() {
  pot = map(analogRead(8), 0, 1023, 100, 1000);
  color1();
  pot = map(analogRead(8), 0, 1023, 100, 1000);
  color2();
  pot = map(analogRead(8), 0, 1023, 100, 1000);
  color3();
}

void color1() { // AZUL
  digitalWrite(AZUL, HIGH);
  delay(pot);
  digitalWrite(AZUL, LOW);
}

void color2() { // VERDE
  digitalWrite(VERDE, HIGH);
  delay(pot);
  digitalWrite(VERDE, LOW);
}

void color3() { // ROJO
  digitalWrite(ROJO, HIGH);
  delay(pot);
  digitalWrite(ROJO, LOW);
}