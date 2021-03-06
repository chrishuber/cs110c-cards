//
//  CS110C - Group5
//  Project1
//
//  game.h
//  01/23/2020
//

#ifndef game_h
#define game_h

#include "card.h"
#include "deck.h"
#include "player.h"

#include <iostream>
#include <vector>

class Game {
    private:
        std::string name;
        std::vector<Player*> players;
        Deck* gameDeck;
        int numStartCards = 5;
        int gameRound = 1;
        int ante = 1;
        int pot = 0;
        bool gameInProgress;
        int currentPlayer;

        void gameLoop();
    
    public:
        Game(std::string name="52 Card Pickup");
        ~Game();
        Deck* deck();
        void initGame(std::string, int numCards);
        std::string getName() const;
        void setName(std::string const);
        void beginRound();
        void dealCards();
        void collectAnte();
        void acceptBet(Player*, int);
        int getPot() const;
        void setPot(const int);
        void addPlayer(Player*);
        void showPlayed();
};

#endif /* game_h */
