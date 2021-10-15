#pragma once
#include "GroundSubSquare.h"
#include "CanopySubSquare.h"

//Grid within a grid

class Square {
public:
	Square();
	Square(char ID);
	char ID;

private:
	GroundSubSquare GroundSubSquares[10][10];
	CanopySubSquare CanopySubSquares[10][10];
};
