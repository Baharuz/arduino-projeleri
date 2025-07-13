#include <dht11.h>

int dhtPin = 2;            
dht11 dhtSensor;

void setup() {
    Serial.begin(9600);   
}

void loop() {
    int result = dhtSensor.read(dhtPin);  
    if (result == DHTLIB_OK) {  
        Serial.print("Humidity (%): ");
        Serial.println((float)dhtSensor.humidity);

        Serial.print("Temperature (C): ");
        Serial.println((float)dhtSensor.temperature);

        Serial.print("Temperature (K): ");
        Serial.println((float)(dhtSensor.temperature + 273.15));

        Serial.print("Temperature (F): ");
        Serial.println((float)(dhtSensor.temperature * 1.8 + 32));
    } else {
        Serial.println("Sensor reading failed!");
    }

    delay(1000);  // Wait 1 second before next reading
}
