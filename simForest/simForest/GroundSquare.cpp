#include "Groundsquare.h"

GroundSquare::GroundSquare()
{
	ID = 1;
	squareID = 'A';
}

GroundSquare::GroundSquare(std::shared_ptr<BaseTree> thisSquaresTree)
{
	ID = 1;
	squareID = 'A';
	mainTree = thisSquaresTree;
	growingTree = nullptr;
}

GroundSquare::GroundSquare(int newID, char newSquareID)
{
	ID = newID;
	squareID = newSquareID;
	mainTree = nullptr;
	growingTree = nullptr;
}


