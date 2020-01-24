//
//  CS110C - Group5
//  Project1
//
//  deck.h Alternate
//  01/24/2020
//

#ifndef deck_h
#define deck_h

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "card.h"
#include <vector>

class Deck {

	public:
		Deck();
		Card dealCard();
		void returnCard();
		void shuffleDeck();

	// Debug functions
		void displayDeck();
		void checkDuplicate();


	private:
		static const int NUM_CARDS = 52;
		vector<Card>cards;

};

#endif /* deck_h */
