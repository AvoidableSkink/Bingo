//
// Created by klind on 2/27/2017.
//

#include <algorithm>
#include <iostream>
#include "Card.h"

Card::Card() {}

Card::Card(int s, int maxNum, int m_id) {
    size = s;
    maxNumber = maxNum;
    id = m_id;

    myNumbers = new int* [getSize()];
    for (int i = 0; i < getSize(); ++i) {
        myNumbers[i] = new int[getSize()];
    }

    fill();
}

Card::~Card() {
    if (this->getSize() != getSize())
    {
        for (int i=0; i < getSize(); i++)
            delete myNumbers[i];
        delete[] myNumbers;
    }
}

//return a shuffled vector of ints ranging from 1 to maxNum
std::vector<int> Card::getPossibleNumbers(int maxNum) {
    std::vector<int> tmp;
    for (int i = 0; i < maxNum; ++i) {
        tmp.push_back(i + 1);
    }
    std::random_shuffle(tmp.begin(), tmp.end());
    return tmp;
}

void Card::fill() {
    std::vector<int> possibleNumbers = getPossibleNumbers(getMaxNumber());

    int count = 0;
    for (int j = 0; j < getSize(); ++j) {
        for (int i = 0; i < getSize(); ++i) {
            myNumbers[j][i] = possibleNumbers[count];
            count++;
        }
    }
}

void Card::print(std::ostream& out) {
    out << "Card #" << getID() << std::endl;

    int count = 0;
    for (int j = 0; j < getSize(); ++j) {
        for (int i = 0; i < getSize(); ++i) {
            out << myNumbers[j][i] << " ";
            count++;
        }
        out << std::endl;
    }
}

int Card::getSize() const {
    return size;
}

int Card::getMaxNumber() const {
    return maxNumber;
}

int Card::getID() const {
    return id;
}