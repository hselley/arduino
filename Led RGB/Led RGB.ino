#define D 500
#define N 50

int rojo=5, 
    verde=6,
    azul=7,
    pot1, pot2, pot3;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(rojo, OUTPUT); // Red
  pinMode(verde, OUTPUT); // Green
  pinMode(azul, OUTPUT); // Blue

  for(int i=1; i<=N; i++) {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
    delay(D);                      

    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, LOW);
    delay(D);                       
    
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
    delay(D);
  }
  
  digitalWrite(rojo, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
}

// the loop function runs over and over again forever
void loop() {
}
