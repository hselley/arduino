#include <Servo.h>
Servo micro_servo;

int posicion[4] = {30, 60, 110, 170};

void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT);
  micro_servo.attach(2);
  micro_servo.write(0);
}

void loop() {
  int x;
  if(digitalRead(3)==1) {
    inicio();
    Serial.println("Ganador = ");
    x = random(1,5);
    Serial.println(x);
    micro_servo.write(posicion[x-1]);
    delay(100);
  }
}

void inicio() {
  for(int j=1; j<=3; j++) {
    micro_servo.write(0);
    for(int i=0; i<4; i++) {
      micro_servo.write(posicion[i]);
     delay(500);
   }
  }
}
