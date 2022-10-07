#define D 500

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(5, OUTPUT); // Red
  pinMode(6, OUTPUT); // Green
  pinMode(7, OUTPUT); // Blue

  for(int i=1; i<=5; i++) {
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(D);                      

    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    delay(D);                       
    
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(D);
  }
  
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

// the loop function runs over and over again forever
void loop() {
}
