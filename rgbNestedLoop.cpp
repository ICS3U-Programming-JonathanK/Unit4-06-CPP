// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan
// Created on: May 28, 2021
// This program displays the the numbers from 0 to 255 for each RGB

#include <iostream>

int main() {
// initilizations
int counterRed;
int counterGreen;
int counterBlue;
const int MAX_COLOUR_VALUE = 50;

// do a nested loop do display the RGB from 0 to 50
for (counterRed = 0; counterRed < MAX_COLOUR_VALUE; counterRed++) {
    for (counterGreen = 0; counterGreen < MAX_COLOUR_VALUE; counterGreen++) {
        for (counterBlue = 0; counterBlue < MAX_COLOUR_VALUE; counterBlue++) {
            std::cout << "RGB (" << counterRed << "," << counterGreen << ","
                << counterBlue << ")" << std::endl;
        }
    }
}
}
