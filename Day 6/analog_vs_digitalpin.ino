int analogPin = 3;

void setup() {
  pinMode(analogPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float time = 4000/256; 

  for(int i = 0; i < 256; i++){
    analogWrite(analogPin, i);
    delay(time);
  }
  for(int i = 256; i >= 0; i--){
    analogWrite(analogPin, i);
    delay(time);
  }
}
