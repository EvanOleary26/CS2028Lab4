#ifndef __TV_HPP
#define __TV_HPP

#include "Shows.h"
#include "Seasons.h"
#include <iostream>

class TV: public Shows{
    private: 
        static const int MAX_EPISODES = 10;
        static const int MAX_SEASONS = 5;
        Seasons series[MAX_SEASONS][MAX_EPISODES];  //series is an array of seasons, 

    public:
        //Getters
        
        //Setters

        //Constructors
        TV() {
            /*
            for (auto &row : series){
                for (auto &col : row){
                    col = Shows();
                }
            }
                */
        }

        //Functions



};






#endif