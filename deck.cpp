//
//  CS110C - Group5
//  Project1
//
//  deck.cpp Alternate
//  01/24/2020
//


#include "deck.h"

Deck::Deck() { //We assume a 52 card deck
	cards.resize(52);
	for (int i = 0; i < NUM_CARDS; i++) {
		char inSuit;
		if (i < 13) inSuit = 'S';
		else if (i < 26) inSuit = 'H';
		else if (i < 39) inSuit = 'D';
		else inSuit = 'C';
		cards.at(i).setSuit(inSuit);
		char inValue;
		if (i % 13 <= 7) inValue = i % 13 + 50; // using acii values
		else if (i % 13 == 8) inValue = 'T';
		else if (i % 13 == 9) inValue = 'J';
		else if (i % 13 == 10) inValue = 'Q';
		else if (i % 13 == 11) inValue = 'K';
		else if (i % 13 == 12) inValue = 'A';
		cards.at(i).setValue(inValue);
	}

}
Deck::displayDeck() {
	for (int i = 0; i < 52; i++) {
		cards.at(i).displayCard();
	}
}
Deck::shuffleDeck() {
	Card* temp;
	temp = new Card;
	for (int i = 0; i < NUM_CARDS; i++)
	{
		int random = rand() % 51 + 0;
		*temp = cards.at(i);
		cards.at(i) = cards.at(random);
		cards.at(random) = *temp;
	}
	delete temp;
}
int main() {
	srand(time(NULL));
}
