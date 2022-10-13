#define PIN 5

float melodia[] = {
  2959.955382, 2793.825851, 2489.015870, 2217.461048, 
  2093.004522, 2217.461048, 2489.015870, 1661.218790, 
  3322.437581, 3322.437581, 1318.510228, 1318.510228, 
  1396.912926, 1396.912926, 1318.510228, 1396.912926, 
  1318.510228, 1046.502261, 2093.004522 };
int duracionNota[] = {2, 2, 2, 2, 4, 4, 4, 2, 4, 1, 4, 4, 4, 4, 4, 2, 2, 4, 8, 2};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<20; i++) {
    tone(PIN, melodia[i], 200/duracionNota[i]);
    delay(500/duracionNota[i]);
    noTone(PIN);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
