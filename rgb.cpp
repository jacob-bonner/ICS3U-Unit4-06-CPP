// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: November 2019
// This program outputs every possible RGB combination

#include <iostream>

int main() {
    // This function outputs every possible RGB combination

    // Variables
    int red;
    int green;
    int blue;

    // Process
    for (red = 0; red <= 255; red++) {
        for (green = 0; green <= 255; green++) {
            for (blue = 0; blue <= 255; blue++) {
                std::cout << "RGB: " << red << "," << green << "," \
                          << blue << std::endl;
            }
        }
    }
    std::cout << "All RGB combinations" << std::endl;
}
