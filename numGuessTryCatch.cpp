// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
// Created by: Yoma Ozoh
// Date: October 2025
// This program generates a random number between 0 and 9
// and checks if the user guessed it correctly, using try and catch

#include <cstdlib>  // for rand() and srand()
#include <iostream>
#include <string>

int main() {
    std::string userGuessAsString;
    int userGuessAsInt;
    int correctNumber;

    // generate random number between 0 and 9
    srand(time(0));
    correctNumber = rand_r() % 9 + 0;

    // get user input as a string
    std::cout << "Guess a number between 0 and 9: ";
    std::cin >> userGuessAsString;

    try {
        // convert input to integer
        userGuessAsInt = std::stoi(userGuessAsString);

        // check if guess is correct
        if (userGuessAsInt == correctNumber) {
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Wrong guess. The correct number was "
            << correctNumber << "." << std::endl;
        }
    } catch (std::invalid_argument) {
        // input was not a number
        std::cout << "ERROR: " << userGuessAsString
        << " is not an integer." << std::endl;
    }

    std::cout << "Thanks for playing!" << std::endl;
}
