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

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline
            
            std::cout << "\nWould you like to play the show? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                show1.Play();
                std::cout << std::endl;
                show1.Details();
            }
        }
        else if (option == 2) {
            // option 2 code
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline

            std::cout << "What is the title of the Movie?" << std::endl;
            std::string titleIn;
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
                std::cout << std::endl;
                movie1.Details();
            }

        }
        else if (option == 3) {
            //option 3 code
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline

            std::cout << "What is the title of the TV Show?" << std::endl;
            std::string titleIn;
            std::getline(std::cin, titleIn);

            std::cout << "What is the description of the TV Show?" << std::endl;
            std::string descIn;
            std::getline(std::cin, descIn);

            TV userTVShow(titleIn,descIn);

            std::cout << "How many seasons in the show?" << std::endl;
            int numSeasons;
            std::cin >> numSeasons;

            std::cout << "How many episodes in the show?" << std::endl;
            int numEpisodes;
            std::cin >> numEpisodes;

            
            Seasons curSeason;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline
            
            for (int s{}; s < numSeasons; s++){
                for (int e{}; e < numEpisodes; e++){

                    std::cout << "What is the title of episode " << e + 1 << " of season " << s + 1 << "?" << std::endl;
                    std::string titleIn;
                    std::getline(std::cin, titleIn);    //get user input for title of current episode and season

                    std::cout << "What is the description for episode " << e + 1 << " of season " << s + 1 << "?" << std::endl;
                    std::string descIn;
                    std::getline(std::cin, descIn);     //get user input for description of current episode and season

                    curSeason.setEpisode(e,Shows(titleIn,descIn));
                }
                userTVShow.setSeason(s,curSeason);
            }
            std::cout << "\nWould you like to play the episode? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                userTVShow.Play();
                std::cout << std::endl;
                userTVShow.Details();
            }
        }
        else if (option == 4) {
            // option 4 code
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline

            std::cout << "What is the title of the Movie?" << std::endl;
            std::string titleIn;
            std::getline(std::cin, titleIn);

            std::cout << "What is the description of the Movie?" << std::endl;
            std::string descIn;
            std::getline(std::cin, descIn);
            std::cout << "What is the runtime of the movie in minutes?" << std::endl;
            int runtime;
            std::cin >> runtime;
            Shows *movie2 = new Movies(titleIn, descIn, runtime); //changes the attributes of the movie

            std::cout << "\nWould you like to play the movie? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                movie2->Play();
                std::cout << std::endl;
                movie2->Details();
            }
            
        }
        else if (option == 5) {
            // option 5 code
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignore '\n' for getline

            std::cout << "What is the title of the TV Show?" << std::endl;
            std::string titleIn;
            std::getline(std::cin, titleIn);

            std::cout << "What is the description of the TV Show?" << std::endl;
            std::string descIn;
            std::getline(std::cin, descIn);

            Shows *userTVShow2 = new TV(titleIn,descIn);

            std::cout << "\nWould you like to play the episode? y/n ";
            char playPrompt = ' ';
            std::cin >> playPrompt;
            if (playPrompt == 'y') {
                userTVShow2->Play();
                std::cout << std::endl;
                userTVShow2->Details();
            }
        }
        else {
            std::cout << "Invalid Input";
        }

        std::cout << "Do you want to continue? y/n: ";
        std::cin >> continueProgram;
    }

    return 0;
}
