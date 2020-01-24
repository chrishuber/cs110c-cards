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
    // theGame.deck().
    
    theGame.deck()->displayDeck();
    theGame.deck()->shuffleDeck();
    theGame.deck()->displayDeck();
    
	Player player1("Afsarah");
	Player player2("Blodwyn");
	// Player player3("Cadence");
    Player player3;
	Player player4("Dulcinea");

	theGame.addPlayer(player1);
	theGame.addPlayer(player2);
	theGame.addPlayer(player3);
	theGame.addPlayer(player4);
    
//    player1.addChips(100);
//    player2.addChips(100);
//    player3.addChips(100);

    player1.drawCard(theGame.deck());
    player1.drawCard(theGame.deck());
    player2.drawCard(theGame.deck());
    player2.drawCard(theGame.deck());
    player2.drawCard(theGame.deck());
    player3.drawCard(theGame.deck());
    player3.drawCard(theGame.deck());
    player4.drawCard(theGame.deck());
    player4.drawCard(theGame.deck());
    player4.drawCard(theGame.deck());

    player1.showHand();
    player2.showHand();
    player3.showHand();
    player4.showHand();
    
    player1.playCard(1);
    player2.playCard(2);
    player4.playCard(0);
    
    player1.showHand();
    player2.showHand();
    player3.showHand();
    player4.showHand();
    
    theGame.deck()->displayDeck();
    theGame.deck()->shuffleDeck();
    theGame.deck()->displayDeck();
}
