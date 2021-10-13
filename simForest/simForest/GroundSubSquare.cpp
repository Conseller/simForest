#include "GroundSubSquare.h"

GroundSubSquare::GroundSubSquare()
{
	ID = 1;
	squareID = 'A';
}

GroundSubSquare::GroundSubSquare(std::shared_ptr<BaseTree> thisSquaresTree)
{
	ID = 1;
	squareID = 'A';
	mainTree = thisSquaresTree;
	growingTree = nullptr;
}

GroundSubSquare::GroundSubSquare(int newID, char newSquareID)
{
	ID = newID;
	squareID = newSquareID;
	mainTree = nullptr;
	growingTree = nullptr;
}


