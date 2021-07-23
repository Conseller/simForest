#include "Map.h"
#include "Square.h"


Map::Map()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			bigGrid[i][j] = Square(i+j);
		}
	}
}

