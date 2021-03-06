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
        Hand playedCards;
        int chips;
        int currentBet;
        bool active;
    
    public:
        Player(std::string name="Unknown");

        void addChips(int);
        int countChips();
        void ante(int);
        void makeBet(int);
        void drawCard(Deck*, bool output=true);
        void playCard(int cardIndex);
        void showHand();
        void fold();
    
        std::string getName();
};

#endif /* player_h */
