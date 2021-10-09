//
// Created by Cian on 04/11/2019.
//

#include <iostream>
#include "Square.h"

Square::Square() {
    chessPiece = NULL;
}

Square::~Square() {
}

Piece* Square::GetPiece() {
    return chessPiece;
}

void Square::SetPiece(Piece *piece) {
    this->chessPiece = piece;
}

void Square::Clear() {
    this->chessPiece = NULL;
}