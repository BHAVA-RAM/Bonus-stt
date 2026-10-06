#include "mathfuncs.h"

#include <iostream>

namespace {
bool isZero(double value) {
    return value == 0.0;
}
}

double add(double a, double b) {
    const double sum = a + b;
    return sum;
}

double subtract(double a, double b) {
    const double difference = a - b;
    return difference;
}

double multiply(double a, double b) {
    const double product = a * b;
    return product;
}

double divide(double a, double b) {
    if (isZero(b)) {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0.0;
    }

    const double quotient = a / b;
    return quotient;
}
