#pragma once
#include "GroundSquare.h"
#include "CanopySquare.h"

//Grid within a grid

class Square {
public:
	Square(char ID);

private:
	char ID;
	GroundSquare groundSquares[10][10];
	CanopySquare canopySquares[10][10];
};
