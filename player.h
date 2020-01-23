//
//  CS110C - Group5
//  Project1
//
//  player.h
//  01/23/2020
//


#ifndef player_h
#define player_h

#include "game.h"
#include "hand.h"
#include "card.h"

#include <iostream>
#include <vector>

class Player {
    private:
        std::string name;
        Hand playerHand;
        int chips;
        bool active;
    
    public:
        Player(std::string name="Unknown");
        void ante(int);
        void addChips(int);
        int countChips();
    
//        void drawCard();
//        void makeBet(int bet);
//        void raise(int raise);
//        void call();
//        void showHand();
//        void fold();
    
        std::string getName();

};

#endif /* player_h */
