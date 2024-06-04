#include "Dice.h"
#include <cstdlib>
#include <ctime>

// Random number generator
Dice::Dice() {
    srand(time(0));
}

// Rolls the dice and returns the result
int Dice::roll() {
    return rand() % 6 + 1;
}
