#include "Piece.h"
#include <iostream>

// constructor
Piece::Piece(string c, string t, array<int, 2> pos) {
    color = c;
    type = t;
    value = 0;
    position = pos;
}

// display piece information
void Piece::display() {
    cout << color << " " << type << " at (" << position[0] << ", " << position[1] << ")" << endl;
}
