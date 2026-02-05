#include <iostream>
#include "Pieces.h"
using namespace std;

int main() {
    cout << "Hello, Chess!" << endl;

    Pawn whitePawn("white", {1, 2});
    whitePawn.display();

    return 0;
}
