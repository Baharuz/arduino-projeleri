Arduino: Ultrasonic Distance Sensor with Buzzer Alert

This project uses an HC-SR04 ultrasonic distance sensor to measure the distance to an object. If the object is closer than a set threshold, a buzzer will sound an alert.

Components Required

    Arduino Board: (e.g., Arduino Uno, Nano, Mega)

    HC-SR04 Ultrasonic Distance Sensor

    Active Buzzer

    Jumper Wires

Wiring Instructions

Connect the components to your Arduino board as follows:

    HC-SR04 Sensor

        VCC: Connect to the 5V pin on the Arduino.

        GND: Connect to the GND pin on the Arduino.

        Trig: Connect to digital pin 9 on the Arduino.

        Echo: Connect to digital pin 8 on the Arduino.

    Buzzer

        Positive (+) pin: Connect to digital pin 7 on the Arduino.

        Negative (-) pin: Connect to the GND pin on the Arduino.

Code Explanation

This Arduino sketch measures distance using sound waves and then triggers a buzzer based on that measurement.

    Variable Declarations:

        const int trigPin = 9;: The trigger pin sends out the ultrasonic pulse.

        const int echoPin = 8;: The echo pin receives the reflected pulse.

        const int buzzerPin = 7;: The digital pin connected to the buzzer.

    void setup():

        Serial.begin(9600);: Starts serial communication for displaying distance measurements.

        pinMode(trigPin, OUTPUT);: Sets the trigger pin as an output.

        pinMode(echoPin, INPUT);: Sets the echo pin as an input.

        pinMode(buzzerPin, OUTPUT);: Sets the buzzer pin as an output.

    void loop():

        Pulse Generation: The code generates a short 10-microsecond pulse on the trigPin to trigger the sensor.

        Duration Measurement: The pulseIn() function measures the time in microseconds it takes for the ultrasonic pulse to travel to the object and bounce back.

        Distance Calculation: The duration is converted into distance in centimeters using the speed of sound. The formula (duration / 2) / 29.1 is used, where 29.1 is the time in microseconds for sound to travel one centimeter.

        Serial Output: The calculated distance is printed to the serial monitor.

        Buzzer Alert: An if statement checks if the distance is greater than 0 and less than or equal to 20 cm. If it is, the buzzer turns on. Otherwise, it stays off.

        delay(500);: The loop pauses for 500 milliseconds before taking the next reading.

How to Use

    Connect Hardware: Follow the Wiring Instructions to connect the components to your Arduino board.

    Copy and Upload: Copy the provided code into a new sketch in the Arduino IDE and upload it to your board.

    View Data and Test:

        Open the Serial Monitor (Tools > Serial Monitor) and make sure the baud rate is set to 9600.

        You will see the distance measurements update every half-second.

        Move an object closer to the sensor. When it gets within 20 cm, the buzzer will start to sound.
