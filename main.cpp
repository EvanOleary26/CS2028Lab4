#include <iostream>
#include <string>

int main() {

    char continueProgram = 'y';

    while (continueProgram = 'y') {
        std::cout << "Press 1 for an instance of Show." << std::endl;
        std::cout << "Press 2 for an instance of Movie." << std::endl;
        std::cout << "Press 3 for an instance of TV Show." << std::endl;
        std::cout << "Press 4 for an instance of a MOVIE declared as a Show" << std::endl;
        std::cout << "Press 5 for an instance of a TV Show declared as a Show" << std::endl;

        int option{ 0 };
        std::cin >> option;

        if (option == 1) {
            // option 1 code
        }
        else if (option == 2) {
            // option 2 code
        }
        else if (option == 3) {
            // option 3 code
        }
        else if (option == 4) {
            // option 4 code
        }
        else if (option == 5) {
            // option 5 code
        }
        else {
            std::cout << "Invalid Input";
        }

        std::cout << "Do you want to continue? y/n: ";
        std::cin >> continueProgram;
    }

    return 0;
}