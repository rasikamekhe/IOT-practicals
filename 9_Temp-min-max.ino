#include <DHT.h>

#define DHTPIN 2       // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11  // Type of sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE);

float maxTemp = -1000;  // Initialize max temperature to a very low value
float minTemp = 1000;   // Initialize min temperature to a very high value

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
 
  // Read temperature in Celsius
  float temperatureC = dht.readTemperature();

  // Read temperature in Fahrenheit
  float temperatureF = temperatureC * 9.0 / 5.0 + 32.0;

  // Update max and min temperatures
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC;
  }
  if (temperatureC < minTemp) {
    minTemp = temperatureC;
  }
 
  // Display temperature in Celsius and Fahrenheit
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" °C, ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  // Display maximum and minimum temperatures seen
  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" °C, Min Temperature: ");
  Serial.print(minTemp);
  Serial.println(" °C");
}
