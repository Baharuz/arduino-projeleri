Arduino: Joystick Controller

A simple Arduino sketch to read the values from a two-axis joystick with a push-button. This project provides a basic example of how to interface a standard analog joystick module with an Arduino board and monitor its output via the Serial Monitor.

Features

    Reads analog values for the X and Y axes, ranging from 0 to 1023.

    Detects the digital state of the push-button (pressed or not pressed).

    Prints all current values to the Serial Monitor for easy debugging and monitoring.

Hardware Required

    Arduino Uno (or any compatible Arduino board)

    Two-axis analog joystick module (often called "PS2 Joystick Module")

    Jumper wires


Connect the joystick module to the Arduino as follows:
## Wiring Diagram

| Joystick Pin | Arduino Pin | Description                    |
|--------------|-------------|--------------------------------|
| `+5V`        | `5V`        | Power supply for the joystick. |
| `GND`        | `GND`       | Ground connection.             |
| `VRx`        | `A0`        | Reads the X-axis position.     |
| `VRy`        | `A1`        | Reads the Y-axis position.     |
| `SW`         | `7`         | Reads the button state.        |

*Note: The `SW` pin is configured with an internal pull-up resistor in the code, so you do not need an external resistor for the button.*
	


How to Use

    Connect the Hardware: Follow the wiring diagram above to connect the joystick to your Arduino board.

    Open the Sketch: Open the provided joystick_controller.ino file in the Arduino IDE.

    Upload the Code: Select the correct board and port from the Tools menu and upload the sketch to your Arduino.

    Open Serial Monitor: After the upload is complete, open the Serial Monitor (Tools > Serial Monitor) and set the baud rate to 9600.

    View Output: As you move the joystick and press the button, you will see the corresponding values and status updates printed in the Serial Monitor.

Code Explanation

    const int joyX = A0;: Defines the analog pin for the X-axis.

    const int joyY = A1;: Defines the analog pin for the Y-axis.

    const int joySW = 7;: Defines the digital pin for the button.

    pinMode(joySW, INPUT_PULLUP);: Sets the button pin as an input with an internal pull-up resistor, which simplifies wiring.

    analogRead(joyX);: Reads the analog voltage from the X-axis, converting it into a value from 0-1023.

    digitalRead(joySW);: Reads the button's state, which will be LOW when pressed.

    Serial.begin(9600);: Initializes serial communication to send data to the computer.

    delay(100);: Pauses the sketch for 100 milliseconds to avoid overwhelming the Serial Monitor with data.
