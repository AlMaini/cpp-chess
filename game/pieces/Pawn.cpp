#include "Piece.h"
#include "Pawn.h"
#include <iostream>

Pawn::Pawn(string c, array<int, 2> pos) : Piece(c, "pawn", pos) {
    value = 1;
}
