#ifndef __TV_HPP
#define __TV_HPP

#include "Shows.h"
#include "Seasons.h"
#include <iostream>

class TV: public Shows{
    private: 
        static const int MAX_SEASONS = 5;
        Seasons series[MAX_SEASONS];  //series is an array of seasons
        int seasonCount;    //Current number of seasons 

    public:
        //Getters
        Seasons getSeason(int seasonNum) {
            if (seasonNum >= 0 && seasonNum < seasonCount) {   //check if seasonNum is valid
                return series[seasonNum];
            }
            throw std::out_of_range("Season index out of range");
        }
        
        //Setters
        //Input the number of the season you want to set, and the season info that will be inputted
        void setSeason(int seasonNum, Seasons season) {
            if (seasonNum >= 0 && seasonNum < MAX_SEASONS) {
                series[seasonNum] = season;
                if (seasonNum >= seasonCount) { //if adding a season more than we already had increase seasonCount to follow that
                    seasonCount = seasonNum + 1;
                }
            }
        }

        //Constructors
        TV() : seasonCount(0) {}  //Default Constructor

        TV(std::string showTitle, std::string showDesc, int numSeasons = 0) 
            : Shows(showTitle, showDesc), seasonCount(numSeasons) {
                if (seasonCount > MAX_SEASONS) {    //make sure that the limit is not exceeded
                        seasonCount = MAX_SEASONS;
                }
            }
        //Functions
        void Play();
        void Details();


};






#endif