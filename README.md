Description
===========

This code example and tutorial is made for the SparkFun PIR sensor available from the original [SparkFun](https://www.sparkfun.com/products/8630) site and also from the [Mänsteri](http://store.mansteri.com/index.php/en/pir-motion-sensor.html?___from_store=fi) store in Finland. I made it because I could not find enough clear examples on how to do this. 

Basically I needed this to work witin an openFrameworks application, but made a pure C++ version just because it's so much less code. To use this within an [openFrameworks](http://www.openframeworks.cc) application, copy the #include statements, copy the code before the while from the main() function to the setup() method of your app and everything that is inside the while(){} loop to the update() or draw() method.

Preparation
===========

Before you start using the code in this repo, make sure that you've done the following steps.

1. Cut off the original PIR sensor connector and replace with something that fits the RPi GPIO pins.<br>![Replace original connector](https://raw.github.com/kr15h/RPi_PIR_SparkFun/master/connector.jpg)

2. We need the PIR sensor to work in 3.3V mode, not 5 - 12V as it is originally intended. To do that, we need to solder a jumper wire that bypasses the voltage regulator.<br>![Solder a jumper wire](https://raw.github.com/kr15h/RPi_PIR_SparkFun/master/jumper.jpg)

3. Connect the VIN wire to pin 1 (3.3V), GND wire to pin 6 (0V) and the ALARM wire to pin 12 (GPIO1). If you look on the PIR sensor from the back and the wires are at the bottom, left one is ALARM, middle one is GND and the right one is VIN.<br>![Solder a jumper wire](https://raw.github.com/kr15h/RPi_PIR_SparkFun/master/wiring.jpg)

Now we are ready do do the code part.

Code
====

1. Log in to your Raspberry Pi via SSH if you don't have a screen and a keyboard connected.<br>
```
ssh pi@111.222.333.444
```

2. Make sure that you have git installed<br>
```
sudo apt-get install git-core
sudo apt-get update
sudo apt-get upgrade
```

3. Go to home directory and Install [WiringPi](http://wiringpi.com)<br>
```
cd /home/pi
git clone git://git.drogon.net/wiringPi
cd wiringPi
git pull origin
./build
```

4. Go to home directory again and clone this repo.<br>
```
cd /home/pi
git clone https://github.com/kr15h/RPi_PIR_SparkFun.git
```

5. Enter the newly created directory and compile using GCC.<br>
```
cd RPi_PIR_SparkFun
gcc -o pirapp -I/usr/local/include -L/usr/local/lib -lwiringPi main.cpp
```

That's it! Hope that this helps somebody.