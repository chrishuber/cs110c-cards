//
//  CS110C - Group5
//  Project1
//
//  deck.cpp
//  01/20/2020
//


#include "deck.h"

#include <cassert>

using namespace std;

/*
 Constructor for the Deck object.
 Calls initCards to populate the deck on instantiation.
*/
Deck::Deck(){
	cards = initCards(52);
}




Deck::~Deck(){
	delete this->cards;
}


/*
 Initializes the deck with card objects in an array using constant array values. Could be further
 abstracted to take arbirary init card arrays to assign so you could have Magic the Gathering or
 Tarot cards.
*/
Card* Deck::initCards(int numCards) {
    const char values[13] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    const char suits[4] = {'D', 'C', 'H', 'S'};
    deckSize = numCards;
    topOfDeck = 0;
    Card* newDeck = new Card[deckSize];
    
    int j = 0;
    int k = 0;
    while (j < 4) {
        for (int i = 0; i < 13; i++) {
            Card* newCard = new Card(values[i], suits[j]);
            newDeck[k] = *newCard;
            k++;
        }
        j++;
    }
    cout << endl << "-------- INIT COMPLETE --------" << endl;
    return newDeck;
}



/*
 Returns a card from the top of the deck. Reassigns remaining cards to a new array
 and deletes the old one to prevent memory leak. Adjusts deck size and returns deck
 with dealt card removed.
*/
Card Deck::dealCard() {
    assert(deckSize > 0);
    
    Card* newDeck = new Card[deckSize - 1];
	Card dealtCard = cards[0];
    
    for (int i = 0; i < deckSize; i++) {
        Card* newCard = new Card(cards[i+1].getValue(), cards[i+1].getSuit());
        newDeck[i] = *newCard;
    }
    
    delete[] cards;
    cards = newDeck;
    deckSize--;
	return dealtCard;
}


void Deck::returnCard(const Card inCard) {
	/* Returns a previously drawn card to the deck.

	- Note: no manipulation of the Card array takes place - 
	the parameter card_ is only used to compare with a card in the Card array.
	- Assumes each card in the deck is unique.
	- Assumes the card being returned was in the deck to begin with.
	*/


    assert(deckSize > 0);


	// All the inactive cards are grouped at the start of the draw order.
	for (int i = 0; i < topOfDeck; i++){
		if (cards[i] == inCard){
			/* Match found.
			Only one match possible, given our assumptions.
			- Decrement the top of deck by 1
			- swap the draw order at i with the draw order at the top of deck
			*/
			topOfDeck--;
			int temp = topOfDeck;
			topOfDeck = i;
			i = temp;

			break;
		}
	}

}



void Deck::shuffleDeck() {
    srand(time(0));
    
    // cout << deckSize;
    int unassigned = deckSize;
    Card* shuffledDeck = new Card[unassigned];
    
    int i = 0;
    while (unassigned > 0) {
        int randIndex = rand() % unassigned;
        // std::cout << "RANDINDEX:[" << randIndex << "]";
        shuffledDeck[i] = cards[randIndex];
        // cout << cards[randIndex].getValue() << cards[randIndex].getSuit() << " ";
        for (int n = randIndex; n < unassigned; n++) {
            cards[n] = cards[n+1];
        }
        unassigned--;
        i++;
    }
    
    delete cards;
    cout << "-------- SHUFFLED --------" << endl;;
    cards = shuffledDeck;
}




void Deck::displayDeck(){
	/* Debug function - displays entire deck in draw order.
	*/
    cout << "-------- CURRENT DECK --------" << endl;
	for (int i = 0; i < this->deckSize; i++) {
		cards[i].displayCard();
	}
    cout << endl;
}



