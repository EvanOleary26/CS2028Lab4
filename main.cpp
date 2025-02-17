#include <iostream>
#include <string>

#include "Shows.h"
#include "Movies.h"
#include "Seasons.h"
#include "TV.h"

int main() {
    
    char continueProgram = 'y';

    while (continueProgram == 'y') {
        std::cout << "Press 1 for an instance of Show." << std::endl;
        std::cout << "Press 2 for an instance of Movie." << std::endl;
        std::cout << "Press 3 for an instance of TV Show." << std::endl;
        std::cout << "Press 4 for an instance of a MOVIE declared as a Show" << std::endl;
        std::cout << "Press 5 for an instance of a TV Show declared as a Show" << std::endl;

        int option{ 0 };
        std::cin >> option;

        if (option == 1) {
            // option 1 code
        }
        else if (option == 2) {
            // option 2 code
        }
        else if (option == 3) {
            // option 3 code
            TV ninjago("Ninjago", "Four ninja warriors swear to protect their golden weapons from Lord Garmadon and his evil skeleton army.");
            //std::cout << ninjago.getTitle() << std::endl;
            //std::cout << ninjago.getDesc() << std::endl;
            Seasons season1,season2;
        
            //create season 1
            season1.setEpisode(0, Shows("Wasted True Potential","In the wake of their previous victory, the ninjas go soft and it is up to Master Wu to remind them of who they truly are."));
            season1.setEpisode(1, Shows("Questing for Quests","Realising they have gone soft, the ninja search for a quest to reignite their Spinjitzu training. Unfortunately, Ninjago City is enjoying a period of rare tranquillity."));
        
            //create season 2
            season2.setEpisode(0, Shows("Darkness Shall Rise","Just as the rebuilding effort in Ninjago begins, the four ninjas come to realise that evil has started to resurface with Lord Garmadon forging the ninjas' lost Golden Weapons."));
            season2.setEpisode(1, Shows("Pirates vs. Ninja","When Garmadon by accident brings to life the original owners of the Black Bounty - the ruthless Captain Soto and his Pirates - it is up to the ninjas to stop them from plundering Ninjago City."));
            
            //add seasons to ninjago
            ninjago.setSeason(0, season1);
            ninjago.setSeason(1, season2);
            
            std::cout << "Play" << std::endl;
            ninjago.Play();
            std::cout << "Details" << std::endl;
            ninjago.Details();
        }
        else if (option == 4) {
            // option 4 code
            Shows *s = new Movies;
            s->Play();

            s->Details();
        }   
        else if (option == 5) {
            // option 5 code
            Shows *s = new TV;
            s->Play();

            s->Details();
        }
        else {
            std::cout << "Invalid Input";
        }

        std::cout << "Do you want to continue? y/n: ";
        std::cin >> continueProgram;
    }

    return 0;
}
