//
//  CS110C - Group5
//  Project1
//
//  main.cpp
//  01/20/2020
//

#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"

using namespace std;

int main() {
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


    std::cout << "Returning the card..." << std::endl;
    testDeck.returnCard(tempCard);
    testDeck.displayActiveDeck();


    std::cout << "Draw three and return in reverse order..." << std::endl;
    Card fooCards[3];
    for (int i = 0; i < 3; i++){
        fooCards[i] = testDeck.dealCard();
    }
    for (int i = 0; i < 3; i++){
        testDeck.returnCard(fooCards[i]);
    }
    testDeck.displayActiveDeck();

    Hand hand1("Wanda");
    Hand hand2("Gary");
    Hand hand3;

    Card card1 = testDeck.dealCard();
    hand1.drawCard(card1);
    Card card2 = testDeck.dealCard();
    hand2.drawCard(card2);
    Card card3 = testDeck.dealCard();
    hand1.drawCard(card3);
    Card card4 = testDeck.dealCard();
    hand2.drawCard(card4);

    hand1.displayHand();
    hand2.displayHand();
    hand3.displayHand();

    delete[] cards;
    // End deck test code
}
