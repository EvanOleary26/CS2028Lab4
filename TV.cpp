#include "TV.h"

void TV::Play() {
    int inSeason, inEp; // Season input and Episode input

    std::cout << "What season and episode would you like to play?" << std::endl;
    std::cout << "Enter the season's (1-" << seasonCount << "): ";
    std::cin >> inSeason;

    if (inSeason < 1 || inSeason > seasonCount) {
        std::cout << "Invalid season" << std::endl;
        return;
    }

    std::cout << "Enter the episode's number: ";
    std::cin >> inEp;

    try {
        //Create episode
        Shows episode = series[inSeason - 1].getEpisode(inEp - 1);

        //Playing episode
        std::cout << "\nNow playing: " << episode.getTitle() << std::endl;
        std::cout << "Description: " << episode.getDesc() << std::endl;
    } catch (const std::out_of_range& e) {
            std::cout << "Invalid episode number" << std::endl;
    }
}

void TV::Display() {
    
}