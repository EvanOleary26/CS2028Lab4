#ifndef __SHOWS_HPP
#define __SHOWS_HPP

#include <iostream>

class Shows {
    private:
        std::string title;
        std::string description;
    
    public:
        //Getters
        std::string getTitle(){ return title; }

        std::string getDesc() { return description; }

        //Setters
        void setTitle(std::string newTitle) { title = newTitle; }

        void setDesc(std::string newDesc) { description = newDesc; }

        //Constructors
        Shows() : title(" "), description(" ") {}  //Default Constructor

        Shows(std::string newTitle,std::string newDesc) : title(newTitle), description(newDesc) {}

        //Functions
        virtual void Play();
        //friend std::string TV::Details();
        void Details();
        
};





#endif