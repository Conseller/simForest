#pragma once
#include "GroundSubSquare.h"
#include "CanopySubSquare.h"

//Grid within a grid

class Square {
public:
	Square();
	Square(char ID);
	char ID;
	GroundSubSquare GroundSubSquares[10][10];

private:
	
	CanopySubSquare CanopySubSquares[10][10];
};
