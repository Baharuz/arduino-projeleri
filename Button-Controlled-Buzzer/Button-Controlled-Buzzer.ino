/*
  Button-Controlled Buzzer

  This project turns a buzzer on when a push button is pressed.
  It demonstrates digital input reading and buzzer control using Arduino.
*/

const int buttonPin = 7;
const int buzzerPin = 8;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    tone(buzzerPin, 1000);
    Serial.println("Button pressed - Buzzer ON");
  } else {
    noTone(buzzerPin);
    Serial.println("Button released - Buzzer OFF");
  }

  delay(100);
}
