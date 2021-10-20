// Copyright (c) 2021 Liam Fletcher All rights reserved.

// Created by: Liam Fletcher
// Created on: Oct 2021
// This program gets random numbers then finds the average using an array

#include <iostream>
#include <ctime>


int main() {
    // This function gets random numbers then finds the average using an array

    // Random number
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int sum = 0;
    float average;
    int numberArray[10];

    // Process
    for (int numberOfTimes = 0; numberOfTimes < 10; numberOfTimes++) {
        randomNumber = rand_r(&seed) % 100;
        std::cout << "The random number"<< " is: " << randomNumber
                  << std::endl;
        numberArray[numberOfTimes] = randomNumber;
        sum = sum + numberArray[numberOfTimes];
    }

    average = sum/10.0;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average is " << average << std::endl;
}
