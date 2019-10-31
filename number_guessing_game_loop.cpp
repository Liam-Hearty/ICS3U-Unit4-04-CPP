// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop to add all whole numbers from 1 to the
// chosen_number


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>


// This function uses a while loop
int main() {
    int loop_counter;
    std::string chosen_number_as_string;
    int chosen_number;
    int random = rand() % 10;

    try {
        for (loop_counter=0; loop_counter < 3; loop_counter++) {
                std::cout << "Input a positive integer: " << std::endl;
                std::cin >> chosen_number_as_string;

                chosen_number = std::stoi(chosen_number_as_string);

                srand(time(NULL));
                random = rand() % 9 + 1;

                if (chosen_number == random) {
                    break;

                } else {
                    std::cout << "" << std::endl;
                    std::cout << "wrong, the number was " << random <<
                    std::endl;
                    std::cout << "Lets play again." << std::endl;
                    std::cout << "" << std::endl;
        }}
        if (chosen_number == random) {
            std::cout << "Congrats! You got it." << std::endl;
        }
        if (chosen_number != random) {
            std::cout << "" << std::endl;
            std::cout << "Maybe try again next time." << std::endl;
    }} catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
}}
