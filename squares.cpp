// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program calculates the squares of sequential numbers starting at 0

#include <iostream>
#include <string>

int main() {
    // this function uses a loop
    std::string userInputAsString;
    float userInputAsFloat;
    int userInput;
    int loopCounter = 1;
    int square = 0;

    // input
    std::cout << "Enter a integer >= 0: ";
    std::cin >> userInputAsString;

    // process & output
    try {
        userInput = std::stoi(userInputAsString);
        userInputAsFloat = std::stof(userInputAsString);
        if (userInput >= 0) {
            if (userInput == userInputAsFloat) {
                for (loopCounter = 0; userInput >= loopCounter;
                    loopCounter++) {
                    square = loopCounter * loopCounter;
                    std::cout << "" << loopCounter << "² = " "" << square
                    << std::endl;
                }
            } else {
            std::cout << "Decimal number entered, please try again."
            << std::endl;
        }
        } else {
            std::cout << "Negative integer entered, please try again."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
