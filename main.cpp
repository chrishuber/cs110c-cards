//
//  CS110C - Group5
//  Project1
//
//  main.cpp
//  01/20/2020
//

#include <iostream>
#include <string>

#include "card.h"
#include "deck.h"
#include "hand.h"
#include "game.h"
#include "player.h"

using namespace std;

int main() {

    Game theGame;
    theGame.initGame("High Card", 52);
    
    theGame.deck()->displayDeck();
    theGame.deck()->shuffleDeck();
    theGame.deck()->displayDeck();
    
	Player player1("Afsarah");
	Player player2("Blodwyn");
	Player player3("Cadence");
	Player player4("Dulcinea");

	theGame.addPlayer(&player1);
	theGame.addPlayer(&player2);
	theGame.addPlayer(&player3);
	theGame.addPlayer(&player4);
    
    player1.addChips(100);
    player2.addChips(100);
    player3.addChips(100);
    player4.addChips(100);

    theGame.beginRound();
    
    player1.showHand();
    player2.showHand();
    player3.showHand();
    player4.showHand();
    
    player1.playCard(1);
    theGame.acceptBet(&player1, 20);
    player2.playCard(2);
    player2.playCard(2);
    theGame.acceptBet(&player2, 15);
    player4.playCard(0);
    player2.playCard(2);
    player1.drawCard(theGame.deck());
    player1.drawCard(theGame.deck());
    player3.drawCard(theGame.deck());
    player4.drawCard(theGame.deck());
    
    player1.showHand();
    player2.showHand();
    player3.showHand();
    player4.showHand();
    
    theGame.deck()->displayDeck();
    theGame.deck()->shuffleDeck();
    theGame.deck()->displayDeck();
}

/* SAMPLE OUTPUT
 -------- INIT COMPLETE --------
 -------- CURRENT DECK --------
 2D 3D 4D 5D 6D 7D 8D 9D TD JD QD KD AD 2C 3C 4C 5C 6C 7C 8C 9C TC JC QC KC AC 2H 3H 4H 5H 6H 7H 8H 9H TH JH QH KH AH 2S 3S 4S 5S 6S 7S 8S 9S TS JS QS KS AS
 -------- SHUFFLED --------
 -------- CURRENT DECK --------
 TH JS 3H 2D 9H 8H JH 7S 5D 8S 4S 4D JC QC 8D AH 2H TS 6S 7C 6C 8C 5C 2C QH AD JD 9S 4H 9D QS TD 3D 3C 4C 9C TC KC 5H AC 7H 2S KH KS QD KD AS 5S 3S 6H 7D 6D
 Afsarah has joined High Card
 Blodwyn has joined High Card
 Cadence has joined High Card
 Dulcinea has joined High Card
 Round 1 has begun!
 Dealing cards...
 Players anteing...
 Current pot is 4
 Afsarah's Hand: HT SJ H3 D2 H9
 Blodwyn's Hand: H8 HJ S7 D5 S8
 Cadence's Hand: S4 D4 CJ CQ D8
 Dulcinea's Hand: HA H2 ST S6 C7
 Afsarah plays SJ
 Afsarah bets 20 chips
 The pot is now 24
 Blodwyn plays S7
 Blodwyn plays D5
 Blodwyn bets 15 chips
 The pot is now 39
 Dulcinea plays HA
 Blodwyn plays S8
 Afsarah draws a card
 Afsarah draws a card
 Cadence draws a card
 Dulcinea draws a card
 Afsarah's Hand: HT H3 D2 H9 C6 C8
 Blodwyn's Hand: H8 HJ
 Cadence's Hand: S4 D4 CJ CQ D8 C5
 Dulcinea's Hand: H2 ST S6 C7 C2
 -------- CURRENT DECK --------
 QH AD JD 9S 4H 9D QS TD 3D 3C 4C 9C TC KC 5H AC 7H 2S KH KS QD KD AS 5S 3S 6H 7D 6D
 -------- SHUFFLED --------
 -------- CURRENT DECK --------
 4C 6D TD QH 3C 9S KC 4H TC 7D 3S KD QS 7H 2S KH QD AC 6H 5S 5H JD AD KS AS 9C 3D 9D
 Program ended with exit code: 0
 */
