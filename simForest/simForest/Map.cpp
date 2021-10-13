#include "Map.h"
#include "Square.h"


Map::Map()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char ID = 65 + i + j;
			bigGrid[i][j] = Square(ID);
		}
	}
}

