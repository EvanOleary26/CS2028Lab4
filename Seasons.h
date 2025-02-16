#ifndef __SEASONS_HPP
#define __SEASONS_HPP

#include "Shows.h"
#include <iostream>
#include <array>


class Seasons: public Shows{
    private:
        static const int MAX_EPISODES = 10;
        Shows episodes[MAX_EPISODES]; //array season filled with "episodes"
        int episodeCount;   //Current number of episodes
    public:
        //Getters
        Shows getEpisode(int inVal);

        //Setters 
        void setEpisode(int inVal,Shows ep);

        //Constructors
        Seasons() : episodeCount(0) {}  //Default Constructor

};




#endif