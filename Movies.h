#ifndef __MOVIES_HPP
#define __MOVIES_HPP

#include "Shows.h"
#include <iostream>

class Movies: public Shows{
    private:
        int runtime;

    public:
        //Getters
        int getRunTime(){ return runtime; }

        //Setters
        void setRunTime(int newRunTime){ runtime = newRunTime; }

        //Constructors
        Movies() {
            Shows();
            runtime = 0;
            }

        Movies(std::string title, std::string desc, int newRunTime) {
            Shows(title,desc);
            runtime = newRunTime;
        }

        //Functions
        void Play();

};



#endif