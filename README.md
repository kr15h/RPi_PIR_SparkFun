Preparation
===========

Before you start using the code in this repo, make sure that you've done the following steps.

1. Cut off the original PIR sensor connector and replace with something that fits the RPi GPIO pins.

![Replace original connector](https://raw.github.com/kr15h/RPi_PIR_SparkFun/master/connector.jpg)

2. We need the PIR sensor to work in 3.3V mode, not 5 - 12V as it is originally intended. To do that, we need to solder a jumper wire that bypasses the voltage regulator.

3. Connect the VIN wire to pin 1 (3.3V), GND wire to pin 6 (0V) and the ALARM wire to pin 12 (GPIO1). If you look on the PIR sensor from the back and the wires are at the bottom, left one is ALARM, middle one is GND and the right one is VIN.
