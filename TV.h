#ifndef __TV_HPP
#define __TV_HPP

#include "Shows.h"
#include "Seasons.h"
#include <iostream>

class TV: public Shows{
    private: 
        Shows tvShow
        static const int MAX_SEASONS = 5;
        Seasons series[MAX_SEASONS];  //series is an array of seasons
        int seasonCount;    //Current number of seasons 

    public:
        //Getters
        Seasons getSeason(int inVal) {
            if (inVal >= 0 && inVal < seasonCount) {   //check if inVal is valid
                return series[inVal];
            }
            throw std::out_of_range("Season index out of range");
        }
        
        //Setters
        void setSeason(int inVal, Seasons season) {
            if (inVal >= 0 && inVal < MAX_SEASONS) {
                series[inVal] = season;
                if (inVal >= seasonCount) { //if adding a season more than we already had increase seasonCount to follow that
                    seasonCount = inVal + 1;
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