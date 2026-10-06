#include "randfuncs.h"

#include <cstdlib>

namespace {
int randomInRange(int lower, int upper) {
    return lower + std::rand() % (upper - lower + 1);
}
}

std::string flipCoin() {
    return randomInRange(0, 1) == 0 ? "Heads" : "Tails";
}

int rollDice6() {
    return randomInRange(1, 6);
}

int rollDice10() {
    return randomInRange(1, 10);
}
