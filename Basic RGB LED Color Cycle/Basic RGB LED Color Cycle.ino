int redPin = 6;
int greenPin = 5;
int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void setRed() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
}

void setGreen() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(blueWrite, 0);
}

void setBlue() {
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
}

void setWhite() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
}

void loop() {
  setRed();
  delay(1000);
  setGreen();
  delay(1000);
  setBlue();
  delay(1000);
  setWhite();
  delay(1000);
}
