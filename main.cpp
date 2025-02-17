#include <iostream>
#include <string>

#include "Shows.h"
#include "Movies.h"
#include "Seasons.h"
#include "TV.h"

int main() {

    char continueProgram = 'y';

    while (continueProgram == 'y') {
        std::cout << "Press 1 for an instance of Show." << std::endl;
        std::cout << "Press 2 for an instance of Movie." << std::endl;
        std::cout << "Press 3 for an instance of TV Show." << std::endl;
        std::cout << "Press 4 for an instance of a MOVIE declared as a Show" << std::endl;
        std::cout << "Press 5 for an instance of a TV Show declared as a Show" << std::endl;

        int option{ 0 };
        std::cin >> option;

        if (option == 1) {
            // option 1 code
            std::cout << "What is the title of the show?" << std::endl;
            std::string titleIn = "";
            std::cin >> titleIn;
            std::cout << "What is the description of the show?" << std::endl;
            std::string descIn;
            std::cin >> descIn;
            Shows show1(titleIn, descIn); //changes the attributes of the show

            std::cout << "\nWould you like to play the show? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                show1.Play();
                show1.Details();
            }
        }
        else if (option == 2) {
            // option 2 code
            std::cout << "What is the title of the Movie?" << std::endl;
            std::string titleIn;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::getline(std::cin, titleIn);

            std::cout << "What is the description of the Movie?" << std::endl;
            std::string descIn;
            std::getline(std::cin, descIn);
            std::cout << "What is the runtime of the movie in minutes?" << std::endl;
            int runtime;
            std::cin >> runtime;
            Movies movie1(titleIn, descIn, runtime); //changes the attributes of the movie

            std::cout << "\nWould you like to play the movie? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                movie1.Play();
                movie1.Details();
            }

        }
        else if (option == 3) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "What is the episode of the show?" << std::endl;
            int episode;
            std::cin >> episode;

            std::cout << "What is the title of the episode?" << std::endl;
            std::string titleIn;
            std::getline(std::cin, titleIn);

            std::cout << "What is the description of the episode?" << std::endl;
            std::string descIn;
            std::getline(std::cin, descIn);

            Shows epDetails1(titleIn, descIn); //sets the episode details

            Seasons ep1; //fixes the episode details to the episode

            ep1.setEpisode(episode, epDetails1); //sets the episode overall

            std::cout << "\nWould you like to play the episode? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                ep1.Play();
                ep1.Details();
            }
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
