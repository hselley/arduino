#define ROJO 10
#define VERDE 11
#define AZUL 12
#define DELAY 250

void setup() {
  // put your setup code here, to run once:
  pinMode(ROJO, OUTPUT);  
  pinMode(VERDE, OUTPUT);  
  pinMode(AZUL, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=ROJO; i<=AZUL; i++) {
    digitalWrite(i, HIGH);
    delay(DELAY);
    digitalWrite(i, LOW);
  }
}
