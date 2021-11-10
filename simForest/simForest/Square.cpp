#include "Square.h"
#include "GroundSubSquare.h"

Square::Square()
{
	
	for(int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			GroundSubSquares[i][j] = GroundSubSquare(i * 10 + j, this->ID);
			CanopySubSquares[i][j] = CanopySubSquare(i * 10 + j, this->ID);
		}
}

Square::Square(char ID)
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			GroundSubSquares[i][j] = GroundSubSquare(i * 10 + j, ID);
			CanopySubSquares[i][j] = CanopySubSquare(i * 10 + j, ID);
		}
}