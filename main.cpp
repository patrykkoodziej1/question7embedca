#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

// Ticker objects for each LED
Ticker ticker1;
Ticker ticker2;

// Function to toggle LED1 state
void toggleLED1() {
    led1 = !led1;
}

// Function to toggle LED2 state
void toggleLED2() {
    led2 = !led2;
}

int main() {
    // Set the initial state of LEDs
    led1 = led2 = 0;

    // Schedule the toggle functions with the specified intervals
    ticker1.attach(&toggleLED1, 2.0); // Every 2 seconds
    ticker2.attach(&toggleLED2, 5.0); // Every 5 seconds

    while (1) {
        // Keep the program running
    }
}

