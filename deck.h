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
		Deck(const Card[], int);
		~Deck();
		Card dealCard();
		void returnCard(const Card);		
		void shuffleDeck();

	// Debug functions
		void displayDeck();
		void displayActiveDeck();


	private:
		void initCards();
		void shuffleDeck(int[], int[], int);

		const Card* cards;
		int topOfDeck;
		int deckSize;
		int* drawOrder;

};

#endif /* deck_h */
