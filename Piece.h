//
// Created by Cian on 04/11/2019.
//

#ifndef ASSIGNMENT4_2_0_PIECE_H
#define ASSIGNMENT4_2_0_PIECE_H
#include <iostream>
#include <string>
//#include "Board.h"



class Board;

enum Colour {
    Black,
    White
};

typedef struct Coordinates {
    int xpos;
    int ypos;
} Position;


class Piece {
public:

    Piece();
    virtual ~Piece();
    void Draw();
    void SetPosition(Position pos);
    Position GetPosition();
    Colour GetColour();
    virtual bool ValidateMove(Position moveToPosition) = 0;
private:

protected:
    std::string type;
    Colour colour;
    Position pos;

};

class King : public Piece {

public:

    King(Colour colour, Position pos);
    virtual ~King();


    bool ValidateMove(Position moveToPosition);
private:

};

class Bishop : public Piece {

public:

    Bishop(Colour colour, Position pos);
    virtual ~Bishop();
    bool ValidateMove(Position moveToPosition);

private:

};

class Knight : public Piece {

public:

    Knight(Colour colour, Position pos);
    virtual ~Knight();


    bool ValidateMove(Position moveToPosition);
private:

};

class Pawn : public Piece {

public:

    Pawn(Colour colour, Position pos);
    virtual ~Pawn();


    bool ValidateMove(Position moveToPosition);
private:
    bool doubleJumpAvailable;


};

class Queen : public Piece {

public:

    Queen(Colour colour, Position pos);
    virtual ~Queen();


    bool ValidateMove(Position moveToPosition);
private:

};

class Rook : public Piece {
public:

    Rook(Colour colour, Position pos);
    virtual ~Rook();


    bool ValidateMove(Position moveToPosition);
private:

};
#endif //ASSIGNMENT4_2_0_PIECE_H