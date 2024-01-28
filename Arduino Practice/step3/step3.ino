int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;
int ledPin4 = 6;
int ledPin5 = 7;
int ledPin6 = 8;
int ledPin7 = 9;
int delayTime = 500;

int musicNotes[ ] = {1, 1, 5, 5, 6, 6, 5};
int number = 0;
int numberLength = 0;
int noteNumber = 0;

long timer = 0;

void setup() {

  pinMode(ledPin1, OUTPUT);
  digitalWrite(ledPin1, LOW);

  pinMode(ledPin2, OUTPUT);
  digitalWrite(ledPin2, LOW);

  pinMode(ledPin3, OUTPUT);
  digitalWrite(ledPin3, LOW);

  pinMode(ledPin4, OUTPUT);
  digitalWrite(ledPin4, LOW);

  pinMode(ledPin5, OUTPUT);
  digitalWrite(ledPin5, LOW);

  pinMode(ledPin6, OUTPUT);
  digitalWrite(ledPin6, LOW);
  
  pinMode(ledPin7, OUTPUT);
  digitalWrite(ledPin7, LOW);

  numberLength = sizeof(musicNotes) / sizeof(musicNotes[0]);
  
}

void loop() {

  if (millis() - timer >= 1500) {

    if(number >= numberLength){
      number = 0;
    }

    noteNumber = musicNotes[number];
    number += 1;

    switch (noteNumber) { 
        case 1:
          digitalWrite(ledPin1, HIGH);
          delay(delayTime);
          break;
        case 2:
          digitalWrite(ledPin2, HIGH);
        delay(delayTime);
          break;
        case 3:
          digitalWrite(ledPin3, HIGH);
        delay(delayTime);
          break;
        case 4:
          digitalWrite(ledPin4, HIGH);
        delay(delayTime);
          break;
        case 5:
          digitalWrite(ledPin5, HIGH);
        delay(delayTime);
          break;
        case 6:
          digitalWrite(ledPin6, HIGH);
        delay(delayTime);
          break;
        case 7:
          digitalWrite(ledPin7, HIGH);
        delay(delayTime);
          break;
      }

      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin3, LOW);
      digitalWrite(ledPin4, LOW);
      digitalWrite(ledPin5, LOW);
      digitalWrite(ledPin6, LOW);
      digitalWrite(ledPin7, LOW);

    timer = millis();

  } 

}