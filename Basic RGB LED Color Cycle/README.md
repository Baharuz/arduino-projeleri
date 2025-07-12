Arduino: Basic RGB LED Color Cycle

This project uses an Arduino to cycle through a few basic colors on a common cathode RGB LED. The colors included in the cycle are Red, Green, Blue, and White.

Components Needed

    Arduino Board (e.g., Arduino Uno)

    Common Cathode RGB LED

    Three Resistors (220Ω to 470Ω)

    Breadboard

    Jumper Wires

Circuit Diagram

Connections (for Common Cathode RGB LED):

    Red LED Leg: Connect the anode (the longer leg) of the Red part of the RGB LED to a 220Ω resistor. Connect the other end of the resistor to digital pin 6 on the Arduino.

    Green LED Leg: Connect the anode (the longer leg) of the Green part of the RGB LED to a 220Ω resistor. Connect the other end of the resistor to digital pin 5 on the Arduino.

    Blue LED Leg: Connect the anode (the longer leg) of the Blue part of the RGB LED to a 220Ω resistor. Connect the other end of the resistor to digital pin 3 on the Arduino.

    Common Cathode Leg: Connect the longest leg (the common cathode) of the RGB LED directly to the GND pin on the Arduino.

Note: The Arduino's PWM-enabled pins (marked with a ~ like pins 3, 5, 6) are used for controlling the brightness of each color.

Code Description

The sketch defines dedicated pins for the Red, Green, and Blue parts of the LED. It then uses four functions (setRed(), setGreen(), setBlue(), and setWhite()) to turn on the appropriate color combinations using analogWrite().

    setup(): Initializes the three pins as OUTPUT to control the LED.

    set...() Functions: Each function sets the analogWrite() value of each color pin to either 255 (fully on) or 0 (off) to create a specific color.

    loop(): Calls each color function sequentially, with a 1000 millisecond (1 second) delay between each color change, creating a continuous color-cycling effect.

    analogWrite(pin, value): This function uses PWM to control the brightness of each color component, allowing for a smooth transition. 255 is the maximum brightness and 0 is off.
