#include "Seasons.h"

Shows Seasons::getEpisode(int inVal){
    if (inVal >= 0 && inVal < episodeCount) {   //check if inVal is valid
        return episodes[inVal];
    }
    throw std::out_of_range("Episode index out of range");
    
}

void Seasons::setEpisode(int inVal,Shows ep) {
    if (inVal >= 0 && inVal < MAX_EPISODES) {    
        episodes[inVal] = ep;
        if (inVal >= episodeCount) {    //if adding an episode in a location more than we already had increase episodeCount to follow that
            episodeCount = inVal + 1;
        }
    } else {
        std::cout << "Invalid episode index" << std::endl;
    }
}