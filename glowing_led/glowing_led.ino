

int ledPin = 9;
int ledPin2 = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {

  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, 255-i);
    analogWrite(ledPin2, i);
    delay(1000/256);
  }
  delay(500);
  
  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, 255-i);
    analogWrite(ledPin2, i);
    delay(1000/256);
  }
  delay(500);
}


