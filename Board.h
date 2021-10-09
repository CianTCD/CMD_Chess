//
// Created by Cian on 04/11/2019.
//

#ifndef ASSIGNMENT4_2_0_BOARD_H
#define ASSIGNMENT4_2_0_BOARD_H

#include <iostream>
#include "Square.h"


using namespace std;

class Board {
public:

    Board();
    virtual ~Board();
    void Draw();
    bool MovePiece(Position fromPos, Position toPos);
    Piece* GetPiece(Position piecePos);

private:

    Square board[8][8];

    void InitializePieces();
    bool IsWithinBoard(Position pos);

};
#endif //ASSIGNMENT4_2_0_BOARD_H