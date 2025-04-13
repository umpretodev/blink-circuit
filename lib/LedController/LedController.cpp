#include "LedController.hpp"
void LedController::turnOn(int led) {
    digitalWrite(led, HIGH);
}

void LedController::turnOff(int led) {
    digitalWrite(led, LOW);
}
