#pragma once

#include "Square.h"

/*
* This object is a grid of squares, which are themselves a grid of ground squares that can hold trees.
*/
class Map {
	std::array<std::array<Square, 4>, 4> bigGrid;
public:
	Map();
};