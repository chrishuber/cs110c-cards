//
//  CS110C - Group5
//  Project1
//
//  game.h
//  01/23/2020
//

#ifndef game_h
#define game_h

#include "deck.h"
#include "card.h"
#include "player.h"

#include <iostream>
#include <vector>

class Game {
    private:
        std::string name;
        std::vector<Player> players;
        Deck gameDeck;
        int pot;
    
    public:
        Game(std::string name="52 Card Pickup");
        int ante = 1;
        int getPot() const;
        void setPot(const int);
        void addPlayer(Player);
        Deck initDeck();
};

#endif /* game_h */
