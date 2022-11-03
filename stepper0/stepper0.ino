int mp1 = 8;
int mp2 = 9;
int mp3 = 10;
int mp4 = 11;
int dG = 5;

void setup() {
  pinMode(mp1, OUTPUT);
  pinMode(mp2, OUTPUT);
  pinMode(mp3, OUTPUT);
  pinMode(mp4, OUTPUT);
}

void loop() {
  digitalWrite(mp1, HIGH);
  digitalWrite(mp2, LOW);
  digitalWrite(mp3, LOW);
  digitalWrite(mp4, LOW);
  delay(dG);

  digitalWrite(mp1, LOW);
  digitalWrite(mp2, HIGH);
  digitalWrite(mp3, LOW);
  digitalWrite(mp4, LOW);
  delay(dG);

  digitalWrite(mp1, LOW);
  digitalWrite(mp2, LOW);
  digitalWrite(mp3, HIGH);
  digitalWrite(mp4, LOW);
  delay(dG);

  digitalWrite(mp1, LOW);
  digitalWrite(mp2, LOW);
  digitalWrite(mp3, LOW);
  digitalWrite(mp4, HIGH);
  delay(dG);
}
