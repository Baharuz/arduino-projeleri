Arduino: Potentiometer-Controlled LED with Serial Output

This project demonstrates how to control the brightness of an LED using a potentiometer and display the sensor's values on the serial monitor.

Components Needed

    Arduino Board (e.g., Arduino Uno)

    Potentiometer (10kΩ is a common choice)

    LED

    Resistor (220Ω to 470Ω)

    Breadboard

    Jumper Wires

    USB Cable for programming the Arduino

Circuit Diagram

Connections:

    Potentiometer:

        Connect one outer pin to the GND pin on the Arduino.

        Connect the other outer pin to the 5V pin on the Arduino.

        Connect the middle pin to the A0 analog input pin on the Arduino.

    LED:

        Connect the long leg (anode) of the LED to one end of the resistor.

        Connect the other end of the resistor to the digital pin 9 on the Arduino.

        Connect the short leg (cathode) of the LED to the GND pin on the Arduino.

Code Description

The Arduino sketch reads the analog voltage from the potentiometer, converts it to a value suitable for controlling the LED's brightness, and then outputs both values to the serial monitor.

    potPin: The analog pin (A0) connected to the potentiometer.

    ledPin: The digital pin (9) for the LED, which supports PWM (Pulse Width Modulation).

    analogRead(potPin): Reads the analog voltage from the potentiometer, providing a value between 0 and 1023.

    map(): This function scales the potentiometer's value (0-1023) to the PWM range (0-255) required by analogWrite().

    analogWrite(ledPin, pwmValue): Sets the brightness of the LED based on the converted PWM value.

    Serial.begin(9600): Initializes the serial communication to display data on the serial monitor.

    Serial.print()/Serial.println(): These functions are used to print the potentiometer and PWM values, allowing you to see the real-time data as you turn the knob.
