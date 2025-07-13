const int joyX = A0; 
const int joyY = A1;

const int joySW = 7;
int buttonState = 0;

void setup() {
  Serial.begin(9600);
  
  // Set the button pin as an input with an internal pull-up resistor
  pinMode(joySW, INPUT_PULLUP);
}

void loop() {
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
  // The state will be LOW when the button is pressed due to the pull-up resistor.
  buttonState = digitalRead(joySW);

  Serial.print("X Axis: ");
  Serial.print(xValue);
  Serial.print(" | Y Axis: ");
  Serial.print(yValue);

  if (buttonState == LOW) {
    Serial.println(" | Button: Pressed");
  } else {
    Serial.println(" | Button: Not Pressed");
  }

  delay(100);
}
