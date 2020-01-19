//
//  CS110C - Group5
//  Project1
//
//  main.cpp
//  01/18/2020
//

#include <iostream>
#include "card.h"
#include "deck.h"

int main(int argc, const char * argv[]) {
    Card c1('S', '2');
    //c1.displayCard();
		Card c2('S', '1');
		
		// Deck test code 
		int size = 10;
		Card* cards = new Card[size];

		cards[0].setSuit('D');
		cards[0].setValue('0');
		
		cards[1].setSuit('D');
		cards[1].setValue('1');
	
		cards[2].setSuit('C');
		cards[2].setValue('2');
	
		cards[3].setSuit('C');
		cards[3].setValue('3');
	
		cards[4].setSuit('H');
		cards[4].setValue('4');
	
		cards[5].setSuit('H');
		cards[5].setValue('5');
	
		cards[6].setSuit('S');
		cards[6].setValue('6');
	
		cards[7].setSuit('S');
		cards[7].setValue('7');
	
		cards[8].setSuit('D');
		cards[8].setValue('8');
	
		cards[9].setSuit('C');
		cards[9].setValue('9');
	
		
		Deck testDeck(cards, size);
		testDeck.shuffleDeck();
		testDeck.displayDeck();

		std::cout << "Draw, shuffle, redisplay." << std::endl;
		Card tempCard = testDeck.dealCard();
		std::cout << "Card drawn: ";
		tempCard.displayCard();
		std::cout << "Remaining cards: " << std::endl;
		testDeck.shuffleDeck();
		testDeck.displayActiveDeck();
		
		delete[] cards;
		// End deck test code
}
