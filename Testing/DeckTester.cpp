//
// Created by klind on 3/2/2017.
//

#include <iostream>
#include "DeckTester.h"
#include "../Deck.h"

void DeckTester::testDeck() {
    std::cout << "\n" << "Test Suite: DeckTester::testDeck" << std::endl;

    std::cout << "Test case 1" << std::endl;
    Deck deck1(3, 3, 10);
    if (deck1.getStatus() == false)
    {
        std::cout << "Failure in Constructor: failed to create legit deck" << std::endl;
    }

    std::cout << "Test case 2" << std::endl;
    Deck deck2(2, 3, 10);
    if (deck2.getStatus() == true)
    {
        std::cout << "Failure in Constructor: created illegitimate deck" << std::endl;
    }
}