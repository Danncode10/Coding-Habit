int readPin = A5;
float calcVolt = 0.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  calcVolt = 5.0/ 1023 * (analogRead(readPin));
  Serial.print(calcVolt);
  Serial.println(" V");

  
}


