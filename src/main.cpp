#include <Arduino.h>
#include <LedController.hpp>

#define LED_PIN1 2
#define LED_PIN2 4
void setup() {
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
}   

void loop() {
    LedController::turnOn(LED_PIN1);
    LedController::turnOff(LED_PIN2);
    delay(500);

    LedController::turnOff(LED_PIN1);
    LedController::turnOn(LED_PIN2);
    delay(500);

}
