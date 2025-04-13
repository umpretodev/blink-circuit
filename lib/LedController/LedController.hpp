#ifndef LEDCONTROLLER_HPP
#define LEDCONTROLLER_HPP

#include <Arduino.h>

class LedController {
public:
    static void turnOn(int led);
    static void turnOff(int led);
};

#endif