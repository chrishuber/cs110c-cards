//
//  CS110C - Group5
//  Project1
//
//  deck.cpp
//  01/20/2020
//


#include "deck.h"


Deck::Deck(){

}


Deck::Deck(const Card cards_[], int deckSize_){
	/* Custom constructor for the Deck object.
	- Takes an array of Card objects and assigns it to 
	the private Cards member array.
	*/
	srand(time(0));


	this->cards = cards_;
	this->deckSize = deckSize_;

	this->drawOrder = new int[deckSize_];
	this->initCards();
	this->topOfDeck = 0;


}


Deck::~Deck(){
	delete this->drawOrder;
}


Card Deck::dealCard(){
	/* Deals a card from the top of the deck.
	*/
	Card returnThis = this->cards[this->drawOrder[topOfDeck]];
	this->topOfDeck++;
	return returnThis;	
}


void Deck::returnCard(const Card card_){
	/* Returns a previously drawn card to the deck.

	- Note: no manipulation of the Card array takes place - 
	the parameter card_ is only used to compare with a card in the Card array.
	- Assumes each card in the deck is unique.
	- Assumes the card being returned was in the deck to begin with.
	*/


	// If no cards missing:
	if (this->topOfDeck == 0){
		// error stuff
		return;
	}

	// All the inactive cards are grouped at the start of the draw order.
	for (int i = 0; i < this->topOfDeck; i++){
//		if (this->cards[this->drawOrder[i]] == card_){
//			/* Match found.
//			Only one match possible, given our assumptions.
//			- Decrement the top of deck by 1
//			- swap the draw order at i with the draw order at the top of deck
//			*/
//			this->topOfDeck--;
//			int temp = this->drawOrder[this->topOfDeck];
//			this->drawOrder[this->topOfDeck] = this->drawOrder[i];
//			this->drawOrder[i] = temp;
//
//			break;
//		}
	}

}


void Deck::shuffleDeck(){
	/* Public - shuffles the cards in the deck that haven't yet been dealt.
	*/


	// Determine the active deck - the cards that haven't yet been drawn.
	int sizeActiveDeck = this->deckSize - this->topOfDeck;
	int* activeDeck = new int[sizeActiveDeck];
	for (int i = 0; i < sizeActiveDeck; i++){
		activeDeck[i] = this->drawOrder[topOfDeck + i];
	}

	
	// Allocate space to make a new active deck, then shuffle.
	int* newActiveDeck = new int[sizeActiveDeck];	
	this->shuffleDeck(newActiveDeck, activeDeck, sizeActiveDeck);


	// Swap out the old active deck for the new one.
	for (int i = 0; i < sizeActiveDeck; i++){
		this->drawOrder[topOfDeck + i] = newActiveDeck[i];
	}

		
	// Free memory when done.
	delete[] activeDeck;
	delete[] newActiveDeck;


}


void Deck::shuffleDeck(
	int newActiveDeck_[], 
	int remainingDeck_[], 
	int lenRemainingDeck_){

	/* Private - picks a random card, places it in newActiveDeck_, 
	makes a new frequency table without the card we just picked, 
	then recurses.

	At each new recursion, newActiveDeck is one item bigger, 
	remainingDeck_ is one item smaller, and lenRemainingDeck _is one less.

	When lenRemainingDeck is 0, the newActiveDeck is done.
	*/

	if (lenRemainingDeck_ == 0){
		return;
	}


	// Pick a random card
	int randomCard = rand() % lenRemainingDeck_;


	// Place it at the end of newActiveDeck
	newActiveDeck_[lenRemainingDeck_ - 1] = remainingDeck_[randomCard];


	/* Construct a new remaining deck from the old one minus the
	random card.
	*/
	int* newRemainingDeck = new int[lenRemainingDeck_ - 1];
	for (int i = 0; i < randomCard; i++){
		newRemainingDeck[i] = remainingDeck_[i];
	}
	for (int i = randomCard + 1; i < lenRemainingDeck_; i++){
		newRemainingDeck[i-1] = remainingDeck_[i];	
	}


	// Recurse
	this->shuffleDeck(newActiveDeck_, 
		newRemainingDeck, 
		lenRemainingDeck_ - 1);

	
	// Free the memory after we're done.
	delete[] newRemainingDeck;


}


void Deck::initCards(){
	/* Private - initializes the int arrays that keep track of
	the cards.
	*/
	for (int i = 0; i < this->deckSize; i++){
		this->drawOrder[i] = i;		
	}


}


void Deck::displayDeck(){
	/* Debug function - displays entire deck in draw order.
	*/
	for (int i = 0; i < this->deckSize; i++){
		this->cards[this->drawOrder[i]].displayCard();
	}

}


void Deck::displayActiveDeck(){
	/* Debug function - displays active deck in draw order.
	*/
	for (int i = this->topOfDeck; i < this->deckSize; i++){
		this->cards[this->drawOrder[i]].displayCard();
	}


}
