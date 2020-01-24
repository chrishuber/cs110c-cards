//
//  CS110C - Group5
//  Project1
//
//  card.cpp
//  01/18/2020
//

#include "card.h"

using namespace std;

Card::Card(){

}


Card::Card(char inSuit, char inValue) {
    suit = inSuit;
    value = inValue;
}

void Card::displayCard() const {
/* Displays the full name of the card.
*/

    cout << suit << value << " ";
	/* Can be rewritten using switch to optimize
	*/
//	if (this->value == '2') std::cout << "Two of ";
//	if (this->value == '3') std::cout << "Three of ";
//	if (this->value == '4') std::cout << "Four of ";
//	if (this->value == '5') std::cout << "Five of ";
//	if (this->value == '6') std::cout << "Six of ";
//	if (this->value == '7') std::cout << "Seven of ";
//	if (this->value == '8') std::cout << "Eight of ";
//	if (this->value == '9') std::cout << "Nine of ";
//	if (this->value == 'T') std::cout << "Ten of ";
//	if (this->value == 'J') std::cout << "Jack of ";
//	if (this->value == 'Q') std::cout << "Queen of ";
//	if (this->value == 'K') std::cout << "King of ";
//	if (this->value == 'A') std::cout << "Ace of ";
//
//
//	switch (this->suit){
//		case 'D':
//			std::cout << "Diamonds";
//			break;
//		case 'H':
//			std::cout << "Hearts";
//			break;
//		case 'C':
//			std::cout << "Clubs";
//			break;
//		case 'S':
//			std::cout << "Spades";
//	}
//
//	std::cout << std::endl;
}


char Card::getSuit() const {
    return suit;
}


char Card::getValue() const {
    return value;
}


void Card::setSuit(const char inSuit){
    suit = inSuit;
}


void Card::setValue(const char inValue){
    value = inValue;
}


/*
 Overloading = operator for card to allow reassignment in deck for shuffling
 */
Card Card::operator=(const Card& right) {
    suit = right.suit;
    value = right.value;
    return *this;
}



/*
Comparison operator for Card object. Assumes there is no such thing as a
duplicate card in the same deck.
*/
bool Card::operator==(Card inCard) const {
    if ((suit == inCard.suit) && (value == inCard.value)){
        return true;
    }
    return false;
}
