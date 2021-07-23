#include "Square.h"
#include "GroundSquare.h"

Square::Square(char newID)
{
	ID = newID;
	for(int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			groundSquares[i][j] = GroundSquare(i*10+j, ID);
			canopySquares[i][j] = CanopySquare(i * 10 + j, ID);
		}
}