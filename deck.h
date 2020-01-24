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

	public:
		Deck();
		Card dealCard();
		void returnCard();
		void shuffleDeck();

	// Debug functions
		void displayDeck();


	private:
		static const int NUM_CARDS = 52;
		Card cards[NUM_CARDS];

};

#endif /* deck_h */
