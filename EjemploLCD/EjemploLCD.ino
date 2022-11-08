#include <LiquidCrystal.h>
#define RS 12
#define E 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2
#define col 16
#define row 2
#define DELAY 2000

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

int r, c, k=0, a=33; // ASCII 97 = a

void setup() {  
  Serial.begin(9600);
  lcd.begin(col, row);
  lcd.clear();

}

void loop() {
  lcd.clear();
  // Se imprimen números
  for(r=0; r<=1; r++) {
    for(c=0; c<=15; c++) {
      lcd.setCursor(c, r);
      lcd.print(k++);
      if(k==10) k=0;
    }
  }
  delay(DELAY);

  lcd.clear();
  // Se imprimen letras
  for(r=0; r<=1; r++) {
    for(c=0; c<=15; c++) {
      lcd.setCursor(c, r);
      lcd.print(char(a++));
      if(a==125) a=33;
    }
  }
  delay(DELAY);

}
