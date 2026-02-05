#ifndef PIECE_H
#define PIECE_H

#include <string>
#include <vector>
using namespace std;

class Piece {
protected:
    int value;
    string color;
    array<int, 2> position;

public:
    string type;
    vector<array<int, 2>> possibleMoves;

    // constructor
    Piece(string c, string t, array<int, 2> pos);
    void display();
};

#endif
