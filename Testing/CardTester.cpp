//
// Created by klind on 3/2/2017.
//

#include <iostream>
#include "CardTester.h"
#include "../Card.h"

void CardTester::testCard() {
    std::cout << "Test Suite: CardTester::testCard" << std::endl;

    std::cout << "Test case 1" << std::endl;
    Card card1(3, 10, 1);
    if (card1.getStatus() == false)
    {
        std::cout << "Failure in constructor: did not create legit card" << std::endl;
    }

    std::cout << "Test case 2" << std::endl;
    Card card2(3, 7, 1);
    if (card2.getStatus() == true)
    {
        std::cout << "Failure in constructor: created illegitimate card" << std::endl;
    }
}