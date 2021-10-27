#pragma once
#include "GroundSubSquare.h"
#include "CanopySubSquare.h"
#include <iostream>
#include <array>

//Grid within a grid

class Square {
public:
	Square();
	Square(char ID);
	char ID;

	std::array<std::array<GroundSubSquare, 9>, 9> GroundSubSquares;
	std::array<std::array<CanopySubSquare, 9>, 9> CanopySubSquares;

private:
	
	
};
