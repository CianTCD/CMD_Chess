//
// Created by Cian on 04/11/2019.
//
#include <iostream>
#include "Board.h"



using namespace std;

Board::Board() {
    InitializePieces();
}


Board::~Board() {
}


void Board::Draw() {
    for (int row = 7; row >= 0; row--) {

        cout << "   ";
        for (int col = 0; col < 8; col++) {
            cout << "-----";
        }
        cout << "-" << endl;


        cout << row + 1 << "  ";
        for (int col = 0; col < 8; col++) {
            cout << "| ";
            Piece *currPiece = board[row][col].GetPiece();
            if (currPiece != NULL) {
                currPiece->Draw();
            } else {
                cout << "  ";
            }
            cout << " ";
        }

        cout << "|" << endl;

    }

    cout << "   ";
    for (int col = 0; col < 8; col++) {
        cout << "-----";
    }
    cout << "-" << endl;

    cout << "   ";
    for (int col = 0; col < 8; col++) {
        cout << "  " << (char) (col + 97) << "  ";
    }
    cout << endl << endl;

}

void Board::InitializePieces() {

    for (int col = 0; col < 8; col++) {
        Position blackPawnPos = {col,6};
        board[blackPawnPos.ypos][blackPawnPos.xpos].SetPiece(new Pawn(Black, blackPawnPos));

        Position whitePawnPos = {col,1};
        board[whitePawnPos.ypos][blackPawnPos.xpos].SetPiece(new Pawn(White, whitePawnPos));
    }



    Position whiteRookPos = {0,0};
    board[whiteRookPos.ypos][whiteRookPos.xpos].SetPiece(new Rook(White, whiteRookPos));

    Position whiteRookPos2 = {7,0};
    board[whiteRookPos2.ypos][whiteRookPos2.xpos].SetPiece(new Rook(White, whiteRookPos2));

    Position blackRookPos = {0,7};
    board[blackRookPos.ypos][blackRookPos.xpos].SetPiece(new Rook(Black, blackRookPos));

    Position blackRookPos2 = {7,7};
    board[blackRookPos2.ypos][blackRookPos2.xpos].SetPiece(new Rook(Black, blackRookPos2));



    Position whiteKnightPos = {1,0};
    board[whiteKnightPos.ypos][whiteKnightPos.xpos].SetPiece(new Knight(White, whiteKnightPos));

    Position whiteKnightPos2 = {6,0};
    board[whiteKnightPos2.ypos][whiteKnightPos2.xpos].SetPiece(new Knight(White, whiteKnightPos2));

    Position blackKnightPos = {1,7};
    board[blackKnightPos.ypos][blackKnightPos.xpos].SetPiece(new Knight(Black, blackKnightPos));

    Position blackKnightPos2 = {6,7};
    board[blackKnightPos2.ypos][blackKnightPos2.xpos].SetPiece(new Knight(Black, blackKnightPos2));



    Position whiteBishopPos = {2,0};
    board[whiteBishopPos.ypos][whiteBishopPos.xpos].SetPiece(new Bishop(White, whiteBishopPos));

    Position whiteBishopPos2 = {5,0};
    board[whiteBishopPos2.ypos][whiteBishopPos2.xpos].SetPiece(new Bishop(White, whiteBishopPos2));

    Position blackBishopPos = {2,7};
    board[blackBishopPos.ypos][blackBishopPos.xpos].SetPiece(new Bishop(Black, blackBishopPos));

    Position blackBishopPos2 = {5,7};
    board[blackBishopPos2.ypos][blackBishopPos2.xpos].SetPiece(new Bishop(Black, blackBishopPos2));



    Position whiteKingPos = {4,0};
    board[whiteKingPos.ypos][whiteKingPos.xpos].SetPiece(new King(White, whiteKingPos));

    Position blackKingPos = {4,7};
    board[blackKingPos.ypos][blackKingPos.xpos].SetPiece(new King(Black, blackKingPos));



    Position blackQueenPos = {3,7};
    board[blackQueenPos.ypos][blackQueenPos.xpos].SetPiece(new Queen(Black, blackQueenPos));

    Position whiteQueenPos = {3,0};
    board[whiteQueenPos.ypos][blackQueenPos.xpos].SetPiece(new Queen(White, whiteQueenPos));




}

bool Board::MovePiece(Position fromPos, Position toPos) {


    bool moveCompleted = false;


    Piece *origPiece = board[fromPos.ypos][fromPos.xpos].GetPiece();


    if (origPiece != NULL && origPiece->ValidateMove(toPos) && IsWithinBoard(toPos)) {


        origPiece->SetPosition(toPos);
        board[toPos.ypos][toPos.xpos].SetPiece(origPiece);
        board[fromPos.ypos][fromPos.xpos].Clear();

        moveCompleted = true;
    }


    return moveCompleted;
}


Piece* Board::GetPiece(Position piecePos) {
    return board[piecePos.ypos][piecePos.xpos].GetPiece();
}


bool Board::IsWithinBoard(Position pos) {


    if ((0 <= pos.xpos && pos.xpos <= 7) && (0 <= pos.ypos && pos.ypos <= 7)) {
        return true;
    }

    return false;
}