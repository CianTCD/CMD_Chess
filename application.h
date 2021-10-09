//
// Created by Cian on 05/11/2019.
//

#ifndef ASSIGNMENT4_2_0_APPLICATION_H
#define ASSIGNMENT4_2_0_APPLICATION_H

#include <iostream>
#include "Board.h"
#include "Piece.h"
#endif //ASSIGNMENT4_2_0_APPLICATION_H

using namespace std;



class Application{

public:
    int interaction();
    void DisplayIntro();

    void DisplayInstructions();

    void ToLowerCase(string *str);

    bool ValidateInput(string input1, string input2);

    Position ConvertChessNotation(string move);

    string input1, input2;
    Colour turnColour = White;
    bool moveSucceed = false;
    Position moveFrom;
    Position moveTo;
};

class Test{

public:
    void testMove();
    void testInput();
    int runTest();
};