//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    nextID = 1;
    numCards = cardCount;

    myCards = new Card[cardCount];
    for (int i = 0; i < cardCount; ++i) {
        myCards[i] = Card(cardSize, numberMax, getNumCards());
        nextID++;
    }
}

Deck::~Deck()
{
    delete [] myCards;
}

void Deck::print(std::ostream& out) const
{
    for (int i = 0; i < getNumCards(); ++i) {
        myCards[i].print(out);
    }
}

void Deck::print(std::ostream& out, int cardIndex) const
{
    if (cardIndex > getNumCards())
        return;
    else
        myCards[cardIndex - 1].print(out);
}

int Deck::getNumCards() const {
    return numCards;
}



