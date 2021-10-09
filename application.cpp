//
// Created by Cian on 05/11/2019.
//
#include <iostream>
#include "application.h"


using namespace std;



Board board;

int Application::interaction() {

    DisplayIntro();

    while (input1 != "quit") {

        cout << string(4, '\n');


        board.Draw();

        do {

            if (turnColour == White) {
                cout << endl << "White's turn" << endl;
            } else {
                cout << endl << "Blacks's turn" << endl;
            }

            do {
                cout << "Please enter where to move from (enter 'quit' to terminate the game): ";
                cin >> input1;
                ToLowerCase(&input1);

                if (input1 == "quit") {
                    return 0;

                } else if (input1 == "help") {

                    DisplayInstructions();

                } else {
                    cout << "Please enter where to move to: ";
                    cin >> input2;
                    ToLowerCase(&input2);
                }

            } while (input1 == "help" || !ValidateInput(input1, input2));



            moveFrom = ConvertChessNotation(input1);
            moveTo = ConvertChessNotation(input2);

            if (board.GetPiece(moveFrom)->GetColour() != turnColour) {

                cout << "Move Invalid: Wrong color pawn selected" << endl;
                moveSucceed = false;

            } else {

                moveSucceed = board.MovePiece(moveFrom, moveTo);

                if (moveSucceed == false) {
                    cout << "Move Invalid" << endl;
                } else {
                    cout << "Move Completed" << endl;
                }
            }

        } while (moveSucceed == false);

        if (turnColour == White) {
            turnColour = Black;
        } else if (turnColour == Black) {
            turnColour = White;
        }

    }

    return (EXIT_SUCCESS);
}

void Application::DisplayIntro() {

    cout << "\n\n\t\t NEW GAME       " << endl;
    DisplayInstructions();
    cout << "\n\n\t\t\tPress enter to start game" << endl;
    cin.ignore();
}

void Application::DisplayInstructions() {

    cout << "\nInstructions:" << endl
         << "To move chess pieces, use standard chess notation." << endl
         << "The board is labeled around the edges with the notation." << endl;
}

void Application::ToLowerCase(string *str) {
    for (size_t i = 0; i < str->length(); ++i) {
        (*str)[i] = tolower((*str)[i]);
    }
}

bool Application::ValidateInput(string input1, string input2) {

    if (input1.size() != 2 || input2.size() != 2) {

        cout << "Incorrect input size. Please check that the input is only a letter followed by number" << endl;
    } else {

        Position moveFrom = ConvertChessNotation(input1);
        Position moveTo = ConvertChessNotation(input2);

        if (moveFrom.xpos < 0 || moveFrom.xpos > 7 || moveFrom.ypos < 0 || moveFrom.ypos > 7) {
            cout << "Source location out of bounds" << endl;

        } else if (moveTo.xpos < 0 || moveTo.xpos > 7 || moveTo.ypos < 0 || moveTo.ypos > 7) {
            cout << "Destination location out of bounds" << endl;
        } else {
            return true;
        }
    }

    return false;
}

Position Application::ConvertChessNotation(string moveInputStr) {

    Position movePosition;

    movePosition.xpos = (int) moveInputStr[0] - 97;

    movePosition.ypos = atoi(&moveInputStr[1]) - 1;

    return movePosition;
}

/*int Test::runTest() {
    testInput();
    cout << "Move Failed";
}

void Test::testInput() {
    string Input1 = "11";
    string Input2 = "12";
    cin >> Input1 >> Input2;

}
*/

