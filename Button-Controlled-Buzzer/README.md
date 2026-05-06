# Arduino: Button-Controlled Buzzer

## Description

This project demonstrates how to control a buzzer using a push button and an Arduino board.

When the button is pressed, the buzzer produces a sound. When the button is released, the buzzer stops.

This project is a basic example of digital input and digital output control.

---

## Components Needed

- Arduino Uno
- Push button
- Buzzer
- Breadboard
- Jumper wires
- USB cable

---

## Circuit Connections

### Button

| Button Pin | Arduino Connection |
|---|---|
| One leg | Digital Pin 7 |
| Other leg | GND |

### Buzzer

| Buzzer Pin | Arduino Connection |
|---|---|
| Positive (+) pin | Digital Pin 8 |
| Negative (-) pin | GND |

---

## Arduino Code

```cpp
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
