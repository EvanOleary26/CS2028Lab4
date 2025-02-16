#ifndef __SEASONS_HPP
#define __SEASONS_HPP

#include "Shows.h"
#include <iostream>
#include <array>


class Seasons: public Shows{
    private:
        static const int MAX_EPISODES = 10;
        static const int MAX_SEASONS = 5;
        int numEpisodes = 0;
        Shows season[MAX_EPISODES]; //array season filled with "episodes"
    public:
        //Getters
        Shows getEpisode(int inVal){
            return season[inVal];
        }

        //Setters 
        /*
        void setSeason(Shows inSeason[],int numEpisodes) {
            this->inSeason[numEpisodes];
        }
        */

        void setEpisode(int inVal, Shows episode){
            season[inVal] = episode;
        }

        //Constructors
        Seasons(int items) {
            season[items];
        }


};




#endif