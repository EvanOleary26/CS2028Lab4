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
        void setSeries(std::string newSeries[/*numSeasons*/][/*numEpisodes*/]){
            series[sizeof(newSeries)][sizeof(newSeries)];
            for(int r{}; r < sizeof(newSeries);r++) {
                for(int c{}; c < sizeof(newSeries);c++) {
                
                }
            }

        }

        //Constructors
        TV() {
            series = {{" "}};
        }



        //Functions



};






#endif