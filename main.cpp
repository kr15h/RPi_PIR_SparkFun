#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "wiringPi.h"

int main( )
{
    if(wiringPiSetup() == -1){
        printf("%s \n", "Failed to setup wiringPi");
    }
    
   	pinMode(1, INPUT); // set pin 1 as input

    // we need to activate the pull-up resistor to
    // make use of this specific PIR sensor
	pullUpDnControl(1, PUD_UP); 
    
    while(1) {
        // read the value
        // 1 means no movement
        // 0 means that something is moving
        int val = digitalRead(1);
        printf("%s: %i\n", "sensor", val );
        usleep(100000); // 10fps
    }
}
