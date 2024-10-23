int green = 7;
int yellow = 4;
int red = 9;

void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  // delay(1000);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);

}
