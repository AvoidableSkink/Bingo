//
// Created by klind on 2/27/2017.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include <vector>

class Card {
private:
    int size;
    int maxNumber;
    int id;

    int** myNumbers;
    bool status = false;
public:
    Card();
    Card(int size, int maxNum, int id);
    ~Card();

    void print(std::ostream& out);
    bool getStatus() const;

private:
    int getSize() const ;
    int getMaxNumber() const ;
    int getID() const;
    std::vector<int> getPossibleNumbers(int maxNum);
    void fill();
};


#endif //BINGO_CARD_H
