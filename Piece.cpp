//
// Created by Cian on 04/11/2019.
//

#include <iostream>
#include "Board.h"


using namespace std;
extern Board board;

Piece::Piece() {
    type = " ";
}

Piece::~Piece() {
}

void Piece::Draw() {
    if (colour == Black) {
        cout << "b";
    }
    else {
        cout << "w";
    }
    cout << type;
}

void Piece::SetPosition(Position pos) {
    this->pos = pos;
}

Colour Piece::GetColour() {
    return colour;
}
King::King(Colour color, Position pos) {
    this->type = "K";
    this->colour = color;
    this->pos = pos;
}

King::~King() {

}

bool King::ValidateMove(Position moveToPos) {

    bool validMove = false;

    if(abs(moveToPos.xpos - pos.xpos) == 1 && (abs(moveToPos.ypos - pos.ypos) == 1) || (abs(moveToPos.ypos - pos.ypos) == 0)){
        validMove = true;
    }
    if(abs(moveToPos.ypos - pos.ypos) == 1 && (abs(moveToPos.xpos - pos.xpos) == 1) || (abs(moveToPos.xpos - pos.xpos) == 0)){
        validMove = true;
    }

    return validMove;
}

Bishop::Bishop(Colour color, Position pos) {
    this->type = "B";
    this->colour = color;
    this->pos = pos;
}

Bishop::~Bishop() {

}

bool Bishop::ValidateMove(Position moveToPos) {
    bool validMove = false;

    if(abs(pos.xpos - moveToPos.xpos) == (abs(pos.ypos - moveToPos.ypos) /*&& board.GetPiece(moveToPos) == NULL*/)) {
        if (colour == Black){
            abs(pos.xpos - moveToPos.xpos) == (abs(pos.ypos - moveToPos.ypos)) * (-1);
        }
    validMove = true;
    }

    return validMove;
}

Knight::Knight(Colour colour, Position pos) {
    this->type = "N";
    this->colour = colour;
    this->pos = pos;
}


Knight::~Knight() {

}

bool Knight::ValidateMove(Position moveToPos) {
    bool validMove = false;

    if((abs(pos.xpos - moveToPos.xpos) == 2 && abs(pos.ypos - moveToPos.ypos) == 1 && board.GetPiece(moveToPos) == NULL || (abs(pos.xpos - moveToPos.xpos) == 1 && abs(pos.ypos - moveToPos.ypos) == 2 && board.GetPiece(moveToPos) == NULL))){
        validMove = true;
    }
return validMove;
}



Pawn::Pawn(Colour colour, Position pos) {
    this->type = "P";
    this->colour = colour;
    this->pos = pos;
    this->doubleJumpAvailable = true;
}


Pawn::~Pawn() {

}


bool Pawn::ValidateMove(Position moveToPos) {


    bool validMove = false;
    int allowableMove1 = 1;
    int allowableMove2 = 2;


    if (colour == Black) {
        allowableMove1 = -1;
        allowableMove2 = -2;
    }


    if (moveToPos.ypos == pos.ypos + allowableMove1 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) {
        validMove = true;


        doubleJumpAvailable = false;

    }

    else if (doubleJumpAvailable == true && moveToPos.ypos == (pos.ypos + allowableMove2) && moveToPos.xpos == pos.xpos
             && board.GetPiece(moveToPos) == NULL)   {

        validMove = true;
    }

    else if (moveToPos.ypos == pos.ypos + allowableMove1 && (moveToPos.xpos == pos.xpos - 1 || moveToPos.xpos == pos.xpos + 1) ) {


        if (board.GetPiece(moveToPos) != NULL && (board.GetPiece(moveToPos)->GetColour() != this->colour) )  {
            validMove = true;
        }
    }

    return validMove;
}



Queen::Queen(Colour colour, Position pos) {
    this->type = "Q";
    this->colour = colour;
    this->pos = pos;
}


Queen::~Queen() {

}


bool Queen::ValidateMove(Position moveToPos) {
    bool validMove = false;
    int allowableMove1 = 1;
    int allowableMove2 = 2;
    int allowableMove3 = 3;
    int allowableMove4 = 4;
    int allowableMove5 = 5;
    int allowableMove6 = 6;
    int allowableMove7 = 7;

    if (colour == Black) {
        allowableMove1 = -1;
        allowableMove2 = -2;
        allowableMove3 = -3;
        allowableMove4 = -4;
        allowableMove5 = -5;
        allowableMove6 = -6;
        allowableMove7 = -7;
    }

    if((moveToPos.ypos == pos.ypos + allowableMove1 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove1 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove2 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove2 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove3 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove3 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove4 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove4 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove5 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove5 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove6 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove6 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove7 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove7 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }

    if((moveToPos.ypos == pos.ypos - allowableMove1 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove1 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove2 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove2 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove3 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove3 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove4 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove4 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove5 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove5 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove6 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove6 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove7 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove7 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }


    else if(abs(pos.xpos - moveToPos.xpos) == (abs(pos.ypos - moveToPos.ypos)) && board.GetPiece(moveToPos) == NULL) {
        validMove = true;
    }


    return validMove;


}

Rook::Rook(Colour colour, Position pos) {
    this->type = "R";
    this->colour = colour;
    this->pos = pos;
}


Rook::~Rook() {

}


bool Rook::ValidateMove(Position moveToPos) {
    bool validMove = false;
    int allowableMove1 = 1;
    int allowableMove2 = 2;
    int allowableMove3 = 3;
    int allowableMove4 = 4;
    int allowableMove5 = 5;
    int allowableMove6 = 6;
    int allowableMove7 = 7;

    if (colour == Black) {
        allowableMove1 = -1;
        allowableMove2 = -2;
        allowableMove3 = -3;
        allowableMove4 = -4;
        allowableMove5 = -5;
        allowableMove6 = -6;
        allowableMove7 = -7;
    }

    if((moveToPos.ypos == pos.ypos + allowableMove1 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove1 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove2 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove2 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove3 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove3 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove4 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove4 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove5 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove5 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove6 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove6 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos + allowableMove7 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos + allowableMove7 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }

    if((moveToPos.ypos == pos.ypos - allowableMove1 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove1 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove2 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove2 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove3 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove3 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove4 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove4 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove5 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove5 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove6 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove6 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    else if((moveToPos.ypos == pos.ypos - allowableMove7 && moveToPos.xpos == pos.xpos && board.GetPiece(moveToPos) == NULL) || (moveToPos.xpos == pos.xpos - allowableMove7 && moveToPos.ypos == pos.ypos && board.GetPiece(moveToPos) == NULL)){
        validMove = true;
    }
    return validMove;
}
