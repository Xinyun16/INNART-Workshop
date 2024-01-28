int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;
int ledPin4 = 6;
int ledPin5 = 7;
int ledPin6 = 8;
int ledPin7 = 9;
int delayTime = 500;

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
  
}

void loop() {

  digitalWrite(ledPin1, HIGH);
  delay(delayTime);
  digitalWrite(ledPin1, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin2, HIGH);
  delay(delayTime);
  digitalWrite(ledPin2, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin3, HIGH);
  delay(delayTime);
  digitalWrite(ledPin3, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin4, HIGH);
  delay(delayTime);
  digitalWrite(ledPin4, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin5, HIGH);
  delay(delayTime);
  digitalWrite(ledPin5, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin6, HIGH);
  delay(delayTime);
  digitalWrite(ledPin6, LOW);
  delay(delayTime);
  
  digitalWrite(ledPin7, HIGH);
  delay(delayTime);
  digitalWrite(ledPin7, LOW);
  delay(delayTime);

}