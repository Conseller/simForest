#include Groundsquare.h

GroundSquare::GroundSquare()
{
	ID = 1;
	squareID = A;
}

GroundSquare::GroundSquare(BaseTree* thisSquaresTree)
{
	ID = 1;
	squareID = A;
	mainTree = thisSquaresTree;
	growingTree = nullptr;
}

GroundSquare::GroundSquare(int ID, char SquareID)
{
	ID = ID;
	squareID = SquareID;
	mainTree = nullptr;
	growingTree = nullptr;
}

