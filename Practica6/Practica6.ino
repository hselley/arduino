/*
    Práctica 6
*/

#define ROJO  A10
#define VERDE A11
#define AZUL  A12
int rojo, verde, azul;
String comando;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() > 0) {
    comando = Serial.readStringUntil('\n');
    Serial.println(comando);
    if(comando == "Rojo") {
      rojo = 255;
      verde = 0;
      azul = 0;
      ponColor(rojo, verde, azul);
    } else if(comando == "Verde") {
      rojo = 0;
      verde = 255;
      azul = 0;
      ponColor(rojo, verde, azul);
    } else if(comando == "Azul") {
      rojo = 0;
      verde = 0;
      azul = 255;
      ponColor(rojo, verde, azul);
    } else if(comando == "Amarillo") {
      rojo = 255;
      verde = 255;
      azul = 0;
      ponColor(rojo, verde, azul);
    } else if(comando == "Magenta") {
      rojo = 255;
      verde = 0;
      azul = 255;
      ponColor(rojo, verde, azul);
    } else if(comando == "Cyan") {
      rojo = 0;
      verde = 255;
      azul = 255;
      ponColor(rojo, verde, azul);
    } else if(comando == "Blanco") {
      rojo = 255;
      verde = 255;
      azul = 255;
      ponColor(rojo, verde, azul);
    } else if(comando == "Negro") {
      rojo = 0;
      verde = 0;
      azul = 0;
      ponColor(rojo, verde, azul);
    } else if(comando == "TR") {
      rojo = 255;
      analogWrite(ROJO, rojo);
    } else if(comando == "FR") {
      rojo = 0;
      analogWrite(ROJO, rojo);
    } else if(comando == "TG") {
      verde = 255;
      analogWrite(VERDE, verde);
    } else if(comando == "FG") {
      verde = 0;
      analogWrite(VERDE, verde);
    } else if(comando == "TB") {
      azul = 255;
      analogWrite(AZUL, azul);
    } else if(comando == "FB") {
      azul = 0;
      analogWrite(AZUL, azul);
    } else if(comando == "RInc") {
      rojo += 100;
      analogWrite(ROJO, rojo);
    } else if(comando == "RDec") {
      rojo -= 100;
      analogWrite(ROJO, rojo);
    } else if(comando == "GInc") {
      verde += 100;
      analogWrite(VERDE, verde);
    } else if(comando == "GDec") {
      verde -= 100;
      analogWrite(VERDE, verde);
    } else if(comando == "BInc") {
      azul += 100;
      analogWrite(AZUL, azul);
    } else if(comando == "BDec") {
      azul -= 100;
      analogWrite(AZUL, azul);
    } else
        Serial.println("Comando no reconocido.");
  }
}

void ponColor(int rojo, int verde, int azul) {
  analogWrite(ROJO, rojo);
  analogWrite(VERDE, verde);
  analogWrite(AZUL, azul);
}