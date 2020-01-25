# cs110c-cards

### 01/25/2020 - Tat
* Fix array out of bounds issue on deck.cpp.

### 01/24/2020 - Chris
* Updated Players vector in Game to hold pointers instead of objects so that the players can perform actions from within the game (such as draw cards from the game deck)
* Added dealCards() method to game to deal parameterized number of cards to all joined players
* Updated drawCard() method with a suppress output flag to allow console message suppression for dealCards() or other purposes
* Added additional demo code to main showing Player, Deck, and Game functionality

### 01/24/2020 - Chris
* Updates dealCard() to reassign all remaining cards to a new array, return that, and delete the old one to avoid memory leak
* Cleanup of last code changes
* Added more demo code to main showing how gameDeck retains memory of dealt cards and is shuffle-able using remaining cards in any remaining amount

### 01/24/2020 - Chris - Summary of changes:
* Deck.cpp - reworked shuffle() into a single function using a nested loop and rand() to assign cards to a new dynamic Card array
* Also created an init() function for deck that triggers off of newGame with an optional card number input
* Updated Player code to allow them to play cards with output which gets removed from their hand and placed into a seperate Deck property
which Game should be able to analyze to determine win conditions

### 01/24/2020 - Daniel - Summary of changes:
* Game.h, Game.cpp - Implemented standard 52 card deck.
* Card.cpp - changed displayCard() to display the full name of the card rather than the contents.
* main.cpp - all old test code moved to testmain.cpp

### 01/23/2020 - Chris - Summary of changes:
* Game.h, Game.cpp, Player.h, Player.cpp files authored
* Updated main temporarily so it still compliles
* Made game object with the intent for it to be extensibe for Daniel's Hi/Lo game
* Work in progress, please post feedback in the Canvas forum

### 01/20/2020 - Chris - Summary of changes:
* Hand.h and Hand.cpp - authored files
* card.cpp - added missing getSuit() and getValue() methods
* main.cpp - updated to include demo code for Hand object

### 01/20/2020 - Daniel - Summary of changes:
* Card.h and Card.cpp - added == operator overload to compare cards
* deck.h and deck.cpp - can add back a card that has been dealt out
* main.cpp - contains test code for the new functionality

### 01/18/2020 - Daniel - Summary of changes:
* card.h and card.cpp - displayCard() is now a const function
* deck.h and deck.cpp - Replaced empty placeholder files with my implementation.
* main.cpp - contains test code for my deck object if anyone wants to tinker with it.
