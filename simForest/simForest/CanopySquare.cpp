#include "CanopySquare.h"


CanopySquare::CanopySquare()
{
	ID = 1;
	squareID = 'A';
}

CanopySquare::CanopySquare(std::shared_ptr<BaseTree> thisSquaresTree)
{
	ID = 1;
	squareID = 'A';
	mainTree = thisSquaresTree;
}

CanopySquare::CanopySquare(int newID, char newSquareID)
{
	ID = newID;
	squareID = newSquareID;
	mainTree = nullptr;
}