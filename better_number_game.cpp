// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program is the better number guessing game

#include <iostream>
#include <random>

int main() {
    // This function is the better number guessing game

    int guessed_number;
    int someRandomNumber;

    {
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 10);  // [0, 10]
    someRandomNumber = idist(rgen);
    }

    // Input
    std::cout << "Pick a number between 0-10: ";
    std::cin >> guessed_number;
    std::cout << "" << std::endl;

    // Process and Output
    if (guessed_number == someRandomNumber) {
        std::cout << ("You guessed the correct number. ") << std::endl;
    } else {
        std::cout << ("You guessed the incorrect number, please run again. ")
        << std::endl;
    }


    std::cout << ("\nDone.") << std::endl;
}
