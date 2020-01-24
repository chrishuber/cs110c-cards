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
        Deck* gameDeck;
        int pot;

				bool gameInProgress;
				int currentPlayer;

				void initCards();
				Card* cards;

				void gameLoop();
    
    public:
        Game(std::string name="52 Card Pickup");
				~Game();
        int ante;
        int getPot() const;
        void setPot(const int);
        void addPlayer(Player);
				void initGame();
};

#endif /* game_h */
