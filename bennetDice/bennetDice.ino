/*
     6
    ---
 1 |   | 5
    ---
 7 | 3 | 4
    --- .
     2  x
*/

byte pinLeds1 = 0;
byte pinLeds2 = 1;
byte pinLeds3 = 3;
byte pinLed4 = 8;
byte pinLed5 = 9;
byte pinLed6 = 10;
byte pinLed7 = 7;
byte buttonPin = 2; 

void setup ()
{
  pinMode (pinLeds1, OUTPUT);
  pinMode (pinLeds2, OUTPUT);
  pinMode (pinLeds3, OUTPUT);
  pinMode (pinLed4, OUTPUT);
  pinMode (pinLed5, OUTPUT);
  pinMode (pinLed6, OUTPUT);
  pinMode (pinLed7, OUTPUT);
  pinMode (buttonPin, INPUT);
  randomSeed(analogRead(4));
}

void loop() {
  short buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    byte ran = random(1, 7);    
    switch(ran) {
      case 1:
      {
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLed5, HIGH);
      break;
      }
      case 2:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed7, HIGH);
      digitalWrite (pinLeds2, HIGH);
            break;
      }
      case 3:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLeds2, HIGH);
      break;
      }
      case 4:
      {
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
            break;
      }
      case 5:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLeds2, HIGH);
            break;
      }
      case 6:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLeds1, HIGH);
      digitalWrite (pinLeds3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLeds2, HIGH);
      digitalWrite (pinLed7, HIGH);
      }
    }
    
    delay (2000);
  }
  digitalWrite (pinLeds1, LOW);
  digitalWrite (pinLeds2, LOW);
  digitalWrite (pinLeds3, LOW);
  digitalWrite (pinLed4, LOW);
  digitalWrite (pinLed5, LOW);
  digitalWrite (pinLed6, LOW);
  digitalWrite (pinLed7, LOW);
}

