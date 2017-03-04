//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>
#include "Card.h"

// TODO: Extend this definition as you see fit

class Deck {
private:
    int nextID;
    int numCards;
    Card* myCards;

    bool status = false;
public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;

    bool getStatus() const;

private:
    int getNumCards() const;
};

#endif //BINGO_DECK_H

