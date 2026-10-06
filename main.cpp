#include <cstdlib>
#include <ctime>
#include <iostream>

#include "mathfuncs.h"
#include "randfuncs.h"

namespace {
void displayMathExamples() {
    std::cout << "=== Math Functions ===\n";
    std::cout << "add(3, 5) = " << add(3, 5) << '\n';
    std::cout << "subtract(10, 4) = " << subtract(10, 4) << '\n';
    std::cout << "multiply(3, 7) = " << multiply(3, 7) << '\n';
    std::cout << "divide(15, 3) = " << divide(15, 3) << '\n';
    std::cout << "divide(10, 0) = " << divide(10, 0) << '\n';
}

void displayRandomExamples() {
    std::cout << "\n=== Random Functions ===\n";
    std::cout << "Coin flip: " << flipCoin() << '\n';
    std::cout << "Dice 6: " << rollDice6() << '\n';
    std::cout << "Dice 10: " << rollDice10() << '\n';
}
}

int main() {
    const auto seed = static_cast<unsigned>(std::time(nullptr));
    std::srand(seed);

    displayMathExamples();
    displayRandomExamples();

    return EXIT_SUCCESS;
}
