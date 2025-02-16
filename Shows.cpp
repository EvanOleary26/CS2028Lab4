#include "Shows.h"
#include <iostream>

void Shows::Play() {
    std::cout << "Playing: " << title << std::endl;
}


void Shows::Details() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Description: " << description << std::endl; 
}