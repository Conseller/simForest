#include "CanopySubSquare.h"


CanopySubSquare::CanopySubSquare()
{
	ID = 1;
	squareID = 'A';
}

CanopySubSquare::CanopySubSquare(std::shared_ptr<BaseTree> thisSquaresTree)
{
	ID = 1;
	squareID = 'A';
	mainTree = thisSquaresTree;
}

CanopySubSquare::CanopySubSquare(int newID, char newSquareID)
{
	ID = newID;
	squareID = newSquareID;
	mainTree = nullptr;
}