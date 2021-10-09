#include "Board.h"
#include <iostream>
#include "application.h"


using namespace std;

int main(){

    char input;

    cout << "Run (r)    Test (t)" << '\n';
    cin >> input;
    if(input == 'r') {
        Application app;
        app.interaction();
    }
    return 0;
}
