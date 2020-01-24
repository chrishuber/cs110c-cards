//
//  CS110C - Group5
//  Project1
//
//  deck.cpp
//  01/20/2020
//


#include "deck.h"

Deck::Deck() { //Constructor initilizes all standard 52 cards
	for (int i = 0; i < 52; i++) {
		char inSuit;
		if (i < 13) inSuit = 'S';
		else if (i < 26) inSuit = 'H';
		else if (i < 39) inSuit = 'D';
		else inSuit = 'C';
		cards[i].setSuit(inSuit);
		char inValue;
		if (i % 13 <= 7) inValue = i % 13 + 50; // using acii values
		else if (i % 13 == 8) inValue = 'T';
		else if (i % 13 == 9) inValue = 'J';
		else if (i % 13 == 10) inValue = 'Q';
		else if (i % 13 == 11) inValue = 'K';
		else if (i % 13 == 12) inValue = 'A';
		cards[i].setValue(inValue);
	}

}
Deck::displayDeck() {
	for (int i = 0; i < 52; i++) {
		cards[i].displayCard();
	}
}
Deck::shuffleDeck() {
	for (int i = 0; i < 52; i++)
	{
		int random = rand() % 51 + 0;
		swap(cards[i], cards[random]);
	}
}
int main() {
	srand(time(NULL));
}
