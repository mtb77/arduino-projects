/* 24
     6
    ---
 1 |   | 5
    ---
 7 | 3 | 4
    --- .
     2  x
*/

byte pinLed1 = 0;
byte pinLed2 = 1;
byte pinLed3 = 3;
byte pinLed4 = 8;
byte pinLed5 = 9;
byte pinLed6 = 10;
byte pinLed7 = 7;
byte buttonPin = 2; 

void setup ()
{
  pinMode (pinLed1, OUTPUT);
  pinMode (pinLed2, OUTPUT);
  pinMode (pinLed3, OUTPUT);
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
    for(int i = 1; i < 6; i++) {
      int dd = 50 + (20 * i);
      digitalWrite (pinLed7, LOW);
      digitalWrite (pinLed1, HIGH);
      delay (dd);
       digitalWrite (pinLed1, LOW);
      digitalWrite (pinLed6, HIGH);
      delay (dd);
       digitalWrite (pinLed6, LOW);
      digitalWrite (pinLed5, HIGH);
      delay (dd);
       digitalWrite (pinLed5, LOW);
      digitalWrite (pinLed4, HIGH);
      delay (dd);
       digitalWrite (pinLed4, LOW);
       digitalWrite (pinLed2, HIGH);
      delay (dd);       
       digitalWrite (pinLed2, LOW);
       digitalWrite (pinLed7, HIGH);
      delay (dd);
    }
    digitalWrite (pinLed7, LOW);
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
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed7, HIGH);
      digitalWrite (pinLed2, HIGH);
            break;
      }
      case 3:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLed2, HIGH);
      break;
      }
      case 4:
      {
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed5, HIGH);
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
            break;
      }
      case 5:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLed2, HIGH);
            break;
      }
      case 6:
      {
      digitalWrite (pinLed6, HIGH);
      digitalWrite (pinLed1, HIGH);
      digitalWrite (pinLed3, HIGH);
      digitalWrite (pinLed4, HIGH);
      digitalWrite (pinLed2, HIGH);
      digitalWrite (pinLed7, HIGH);
      }
    }
    
    delay (2000);
  }
  digitalWrite (pinLed1, LOW);
  digitalWrite (pinLed2, LOW);
  digitalWrite (pinLed3, LOW);
  digitalWrite (pinLed4, LOW);
  digitalWrite (pinLed5, LOW);
  digitalWrite (pinLed6, LOW);
  digitalWrite (pinLed7, LOW);
}

