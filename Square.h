//
// Created by Cian on 04/11/2019.
//

#ifndef ASSIGNMENT4_2_0_SQUARE_H
#define ASSIGNMENT4_2_0_SQUARE_H
#include <iostream>
#include "Piece.h"

#endif //ASSIGNMENT4_2_0_SQUARE_H

using namespace std;
class Square {
public:

    Square();
    virtual ~Square();


    Piece* GetPiece();
    void SetPiece(Piece *piece);
    void Clear();

private:

    Piece *chessPiece;
};