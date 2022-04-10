// Copyright (c) 2022 Paterry Baptichon All rights reserved.
//
// Created by: Paterry Baptichon
// Created on: 2022-04-09
// This is a program which makes you play a numebr guess game.

#include <iostream>
#include <cstdlib>
#include <string>
#include <random>


int main() {
    int someRandomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 10);   // [0,10]
    someRandomNumber = idist(rgen);
    // This is what runs the game.
    std::string guessedNumber;
    int integer_as_number;

    // Input
    std::cout << " ";
    std::cout << " ";
    while (true) {
        std::cout << "Guess a number between 0-10?: ";
        std::cin >> guessedNumber;
        std::cout << "" << std::endl;

    // Process
        try {
            integer_as_number = std::stoi(guessedNumber);
            if (integer_as_number == someRandomNumber) {
            // Output
                std::cout << "You did it, you won!";
                std::cout << "Thanks for playing!";
                std::cout << "" << std::endl;
                break;
            } else {
                std::cout <<"not correct the answer is:  "<< someRandomNumber << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a valid number." << std::endl;
        }
    }
}