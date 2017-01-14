This is a modified library for the Adafruit BME280 Humidity, Barometric Pressure + Temp sensor specifically for **Bluz Platform**.

Sensor : * http://www.adafruit.com/products/2652

Based on original work done by @adafruit and @mhaack.

* https://github.com/adafruit/Adafruit_BME280_Library
* https://github.com/mhaack/Adafruit_BME280_Library

This sensor uses I2C to communicate with BluzDK, up to 4 pins are required to interface.

Keep in mind, this **only** works for i2c communication method.

Only tested with firmeware version **1.1.47**.



**Hardware Interfacing**

3.3V supply       ==> VIN Pin of sensor & VIN Pin of BluzDK <br />
Supply Ground     ==> GND Pin of sensor & GND Pin of BluzDK <br />
SCK Pin of sensor ==> D1 Pin of BluzDK <br />
SD1 Pin of sensor ==> D0 Pin of BluzDK <br />

**Original readme from Adafruit**

This is a library for the Adafruit BME280 Humidity, Barometric Pressure + Temp sensor

Designed specifically to work with the Adafruit BME280 Breakout

http://www.adafruit.com/products/2652

These sensors use I2C or SPI to communicate, up to 4 pins are required to interface

Adafruit invests time and resources providing this open source code, please support Adafruit and open-source hardware by purchasing products from Adafruit!

Check out the links above for our tutorials and wiring diagrams

Written by Limor Fried/Ladyada for Adafruit Industries.
BSD license, all text above must be included in any redistribution

To download. click the DOWNLOAD ZIP button, rename the uncompressed folder Adafruit_BME280. Check that the Adafruit_BME280 folder contains Adafruit_BME280.cpp and Adafruit_BME280.h
