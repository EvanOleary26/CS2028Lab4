#include "Shows.h"
#include <iostream>

void Shows::Play() {
    std::cout << "Playing: " << title << std::endl;
    Details();
}


void Shows::Details() {
    std::string title = getTitle();
    std::string description = getDesc();
    std::cout << "Title: " << title << std::endl;
    std::cout << "Description: " << description << std::endl; 
}
