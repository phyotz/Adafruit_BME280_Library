/***************************************************************************
  This is a library for the BME280 humidity, temperature & pressure sensor

  Designed specifically to work with the Adafruit BME280 Breakout
  ----> http://www.adafruit.com/products/2650

  These sensors use I2C or SPI to communicate, 2 or 4 pins are required
  to interface.

  Adafruit invests time and resources providing this open source code,
  please support Adafruit andopen-source hardware by purchasing products
  from Adafruit!

  Written by Limor Fried & Kevin Townsend for Adafruit Industries.
  BSD license, all text above must be included in any redistribution
 ***************************************************************************/

#include "Adafruit_Sensor.h"
#include "Adafruit_BME280.h"
#include "application.h"

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme; // I2C

void setup() {
  Serial.begin(9600);
  Serial.println(F("BME280 test"));

  if (!bme.begin()) {
    Serial.println("Could not find a valid BME280 sensor, check wiring!");
    //while (1); 
  }
}

void loop() {
    System.sleep(SLEEP_MODE_CPU);
  
    double temperature = bme.readTemperature();
    Particle.publish("Temperature", String(temperature) + "(degC)");

    double  humidity = bme.readHumidity();
    Particle.publish("Humidity", String(humidity) + "(%)");
  
    double  pressure = bme.readPressure() / 100.0F;
    Particle.publish("Pressure", String(pressure) + "(hPa)");
  
    //Disable altitude part. If includes, will overflow the allowed user app size defined for firmware 1.1.47.
    /*
    Serial.print("Approx. Altitude = ");
    Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
    Serial.println(" m");
    */
    delay(2000);
}
