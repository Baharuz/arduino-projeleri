Arduino: DHT11 Sensor Reading

This project demonstrates how to read temperature and humidity data from a DHT11 sensor using an Arduino board and display the values on the serial monitor.

Components Required

    Arduino Board: (e.g., Arduino Uno, Nano, Mega)

    DHT11 Temperature and Humidity Sensor

    Jumper Wires

    10k Ohm Resistor: (Optional, but recommended for signal stability)

Wiring Instructions

Connect the DHT11 sensor to your Arduino board as follows:

    DHT11 VCC: Connect to the 5V pin on the Arduino.

    DHT11 GND: Connect to the GND pin on the Arduino.

    DHT11 Data Pin: Connect to digital pin 2 on the Arduino. If you want to use a different pin, you must change the dhtPin variable in the code.

    Note: A 10k Ohm pull-up resistor is often used between the VCC and Data pins to ensure reliable communication. Many DHT11 sensor modules already have this resistor built-in.

Code Explanation

This Arduino sketch uses the DHT library to communicate with the sensor.

    #include <dht11.h>: This line includes the necessary library. You will need to install it via the Arduino IDE's Library Manager.

    int dhtPin = 2;: This variable specifies the digital pin the sensor's data line is connected to.

    dht11 dhtSensor;: This creates an object to manage the sensor readings.

    void setup():

        Serial.begin(9600);: This starts the serial communication at a baud rate of 9600, which allows the Arduino to send data to your computer for viewing.

    void loop():

        int result = dhtSensor.read(dhtPin);: This attempts to read data from the DHT11 sensor. The result is stored in the result variable.

        if (result == DHTLIB_OK): This conditional statement checks if the sensor reading was successful. DHTLIB_OK is a constant defined by the library.

            If successful, it prints the humidity and temperature values in Celsius, Kelvin, and Fahrenheit to the serial monitor.

        else: If the sensor reading fails, it prints an error message.

        delay(1000);: This command pauses the program for 1000 milliseconds (1 second) before the next reading, preventing the serial monitor from being flooded with data.


     
