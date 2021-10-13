#include "Square.h"
#include "GroundSubSquare.h"

Square::Square()
{
	
	for(int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			GroundSubSquares[i][j] = GroundSubSquare(i * 10 + j, ID);
			CanopySubSquares[i][j] = CanopySubSquare(i * 10 + j, ID);
		}
}