
int potPin = A0;   
int ledPin = 9;    
int potDegeri;
int pwmDegeri;

void setup() {
  
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  potDegeri = analogRead(potPin);
  pwmDegeri = map(potDegeri, 0, 1023, 0, 255);
  
  analogWrite(ledPin, pwmDegeri);
  
  Serial.print("Potansiyometre Degeri: ");
  Serial.print(potDegeri);
  Serial.print("  |  PWM Degeri: ");
  Serial.println(pwmDegeri);
  
  delay(10); 
}
