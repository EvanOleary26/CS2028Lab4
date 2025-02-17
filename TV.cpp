#include "TV.h"

void TV::Play() {
    int inSeasonNum, inEpNum; // Season input and Episode input

    std::cout << "What season and episode would you like to play?" << std::endl;
    std::cout << "Enter the season's (1-" << seasonCount << "): ";
    std::cin >> inSeasonNum;

    if (inSeasonNum < 1 || inSeasonNum > seasonCount) {
        std::cout << "Invalid season" << std::endl;
        return;
    }

    std::cout << "Enter the episode's number: ";
    std::cin >> inEpNum;

    try {
        //Create episode
        Shows episode = series[inSeasonNum - 1].getEpisode(inEpNum - 1);

        //Playing episode
        std::cout << "\nNow playing: " << episode.getTitle() << std::endl;
        std::cout << "Description: " << episode.getDesc() << std::endl;
    } catch (const std::out_of_range& e) {
            std::cout << "Invalid episode number" << std::endl;
    }
}

void TV::Details() {
    std::cout << "Title: " << getTitle() << std::endl;
    std::cout << "Description: " << getDesc() << std::endl;
    std::cout << "Number of Seasons: " << seasonCount << std::endl;
}