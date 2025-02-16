#ifndef __TV_HPP
#define __TV_HPP

#include "Shows.h"
#include "Seasons.h"
#include <iostream>

class TV: public Shows{
    private: 
        static const int MAX_EPISODES = 10;
        static const int MAX_SEASONS = 5;
        Seasons series[MAX_SEASONS][MAX_EPISODES];

    public:
        //Getters
        
        //Setters



        //Constructors


        //Functions



};






#endif