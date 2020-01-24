//
//  CS110C - Group5
//  Project1
//
//  deck.h
//  01/20/2020
//

#ifndef deck_h
#define deck_h

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "card.h"

class Deck {
    
    private:
        Card* cards;
        Card* initCards(int);
        Card* newCard;
        int topOfDeck;
        int deckSize;
    
	public:
		Deck();
		~Deck();
		Card dealCard();
        void returnCard(const Card);

		void displayDeck();
        void shuffleDeck();    
};

#endif /* deck_h */
