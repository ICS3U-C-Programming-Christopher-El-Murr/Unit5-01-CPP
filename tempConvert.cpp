// Copyright (c) 2025 Christopher El-Murr All rights reserved
// Created by Christopher El-Murr
// Date:2026/01/04
// Program converts Celsius to Fahrenheit using a separate function

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

void fahrenheit() {
    std::string input;
    std::cout << "Enter temperature in Celsius: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    double celsius;

    // Validate numeric input
    if (!(ss >> celsius)) {
        std::cout << "Invalid input." << std::endl;
        std::cout << "Please enter a number next time." << std::endl;
        return;
    }

    // Convert Celsius to Fahrenheit
    double fahrenheit_temp = (9.0 / 5.0) * celsius + 32;

    // Output with fixed 2-decimal formatting
    std::cout << celsius << "°C is equal to "
              << std::fixed << std::setprecision(2)
              << fahrenheit_temp << "°F" << std::endl;
}

int main() {
    fahrenheit();
    return 0;
}
