#include "Seasons.h"

Shows Seasons::getEpisode(int episodeNum){
    if (episodeNum >= 0 && episodeNum < episodeCount) {   //check if episodeNum is valid
        return episodes[episodeNum];
    }
    throw std::out_of_range("Episode index out of range");
    
}

void Seasons::setEpisode(int episodeNum,Shows newEpisode) {
    if (episodeNum >= 0 && episodeNum < MAX_EPISODES) {    
        episodes[episodeNum] = newEpisode;
        if (episodeNum >= episodeCount) {    //if adding an episode in a location more than we already had increase episodeCount to follow that
            episodeCount = episodeNum + 1;
        }
    } else {
        std::cout << "Invalid episode index" << std::endl;
    }
}