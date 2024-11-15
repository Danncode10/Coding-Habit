int readPin = A5;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("The value of A5 is ");
  Serial.println(analogRead(readPin));
  
}


