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
    
    delete[] newCard;
    
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
    delete [] newCard;
    cards = newDeck;
    deckSize--;
	return dealtCard;
}


/*
 Puts a previously drawn card on the bottom of deck. Creates a new array, adds
 the returned card to it, deletes the old array to avoid memory issues, and rassigns
 the new array as the deck.
*/
void Deck::returnCard(const Card inCard) {
    Card* newDeck = new Card[deckSize + 1];
    newDeck[deckSize + 1] = inCard;
    
    delete[] cards;
    cards = newDeck;
}



void Deck::shuffleDeck() {
    srand(time(0));
    
    int unassigned = deckSize;
    Card* shuffledDeck = new Card[unassigned];
    
    int i = 0;
    while (unassigned > 0) {
        int randIndex = rand() % unassigned;
        shuffledDeck[i] = cards[randIndex];
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



/*
 Displays all cards in the deck in upcoming order they will be drawn.
*/
void Deck::displayDeck(){
    cout << "-------- CURRENT DECK --------" << endl;
	for (int i = 0; i < this->deckSize; i++) {
		cards[i].displayCard();
	}
    cout << endl;
}



