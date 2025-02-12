#ifndef __TV_HPP
#define __TV_HPP

#include "Shows.h"
#include <iostream>

class TV: public Shows {
    private: 
        std::string series[0][0];

    public:
    //Needs work
        //Getters
        std::string getSeries() { return series; }
        //Setters
        void setSeries(std::string newSeries[][]){
            series[sizeof(newSeries)]
            for (int c{}; c < newSeries)
            series = newSeries
        }

        //Constructors




        //Functions



};






#endif