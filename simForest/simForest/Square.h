#pragma once
#include "GroundSquare.h"
#include "CanopySquare.h"

class Square {
	char ID;
	groundSubSquare groundSquares[10][10];
	CanopySquare canopySquares[10][10];
};