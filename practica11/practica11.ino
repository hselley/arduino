#include <LiquidCrystal.h>
#define RS 12
#define E 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2
#define col 16
#define row 2

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
// Señalamiento 1: Anchura libre
byte a[8] = {
  B00000,
  B00000,
  B00001,
  B00010,
  B00100,
  B01000,
  B10000,
  B00111
};
byte b[8] = {
  B01000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00011,
  B10011,  
  B11011
};
byte c[8] = {
  B00010,
  B00001,
  B00000,
  B00000,
  B00000,
  B11000,
  B11001,
  B11011
};
byte d[8] = {
  B00000,
  B00000,
  B10000,
  B01000,
  B00100,
  B00010,
  B00001,
  B11100
};
byte e[8] = {
  B00111,
  B10000,
  B01000,
  B00100,
  B00010,
  B00001,
  B00000,
  B00000
};
byte f[8] = {
  B11011,
  B10011,
  B00010,
  B00000,
  B00000,
  B00000,
  B10000,
  B01000,
};
byte g[8] = {
  B11011,
  B11001,
  B01000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00010
};
byte h[8] = {
  B11100,
  B00001,
  B00010,
  B00100,
  B01000,
  B10000,
  B00000,
  B00000
};
// Señalamiento 2: Prohibido el retorno
byte i[8] = {
  B00001,
  B00010,
  B00100,
  B01000,
  B10000,
  B10000,
  B10000,
  B10000  
};
byte j[8] = {
  B10000,
  B11011,
  B01111,
  B01100,
  B11100,
  B11110,
  B11010,
  B11011
};
byte k[8] = {
  B00000,
  B11000,
  B11100,
  B00110,
  B00011,
  B00011,
  B00011,
  B00011
};
byte l[8] = {
  B10000,
  B01000,
  B00100,
  B00010,
  B00001,
  B00001,
  B00001,
  B00001
};
byte m[8] = {
  B10000,
  B10000,
  B10000,
  B10001,
  B01000,
  B00100,
  B00010,
  B00001
};
byte n[8] = {
  B11000,
  B11000,
  B11000,
  B11110,
  B11100,
  B11000,
  B00000,
  B00000
};
byte o[8] = {
  B10011,
  B11011,
  B01011,
  B01111,
  B00111,
  B00111,
  B00010,
  B00011
};
byte p[8] = {
  B00001,
  B00001,
  B00001,
  B00001,
  B00010,
  B00100,
  B01000,
  B10000  
};

void setup() {
  Serial.begin(9600);
  lcd.begin(col, row);
}

void loop() {
  uno();
  delay(5000); // parámetro c
  dos();
  delay(5000); // parámetro c
}

void uno() {
  lcd.clear();
  lcd.createChar(0, a);
  lcd.createChar(1, b);
  lcd.createChar(2, c);
  lcd.createChar(3, d);
  lcd.createChar(4, e);
  lcd.createChar(5, f);
  lcd.createChar(6, g);
  lcd.createChar(7, h);
  lcd.setCursor(0, 0); lcd.write(byte(0));
  lcd.setCursor(1, 0); lcd.write(byte(1));
  lcd.setCursor(2, 0); lcd.write(byte(2));
  lcd.setCursor(3, 0); lcd.write(byte(3));
  lcd.setCursor(0, 1); lcd.write(byte(4));
  lcd.setCursor(1, 1); lcd.write(byte(5));
  lcd.setCursor(2, 1); lcd.write(byte(6));
  lcd.setCursor(3, 1); lcd.write(byte(7));
  lcd.setCursor(5, 0); lcd.print("Anchura");
  lcd.setCursor(5, 1); lcd.print("Libre");
}

void dos() {
  lcd.clear();
  lcd.createChar(0, i);
  lcd.createChar(1, j);
  lcd.createChar(2, k);
  lcd.createChar(3, l);
  lcd.createChar(4, m);
  lcd.createChar(5, n);
  lcd.createChar(6, o);
  lcd.createChar(7, p);
  lcd.setCursor(0, 0); lcd.write(byte(0));
  lcd.setCursor(1, 0); lcd.write(byte(1));
  lcd.setCursor(2, 0); lcd.write(byte(2));
  lcd.setCursor(3, 0); lcd.write(byte(3));
  lcd.setCursor(0, 1); lcd.write(byte(4));
  lcd.setCursor(1, 1); lcd.write(byte(5));
  lcd.setCursor(2, 1); lcd.write(byte(6));
  lcd.setCursor(3, 1); lcd.write(byte(7));
  lcd.setCursor(5, 0); lcd.print("Prohibido");
  lcd.setCursor(5, 1); lcd.print("el retorno");  
}
