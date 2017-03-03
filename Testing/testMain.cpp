//
// Created by Stephen Clyde on 2/20/17.
//

#include <iostream>
#include <ctime>

#include "MenuOptionTester.h"
#include "MenuTester.h"
#include "DeckTester.h"
#include "CardTester.h"

int main()
{

    // Initialize the random number generator
    unsigned int seed = (unsigned int) time(NULL);
    srand(seed);

    // TODO: Test your components
    CardTester cardTester;
    cardTester.testCard();

    DeckTester deckTester;
    deckTester.testDeck();

    MenuOptionTester menuOptionTester;
    menuOptionTester.testConstructorAndGetter();

    MenuTester menuTester;
    menuTester.testConstructorAndGetter();
}