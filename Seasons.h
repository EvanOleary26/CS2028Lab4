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
        Shows getEpisode(int episodeNum);

        //Setters 
        void setEpisode(int episodeNum,Shows newEp); //Episode number , Episode -  Title and Description as a show

        //Constructors
        Seasons() : episodeCount(0) {}  //Default Constructor

};




#endif