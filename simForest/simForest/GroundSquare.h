#pragma once

#include "Terrain.h"

class BaseTree;

class GroundSquare {
public:
	int ID;
	char squareID;

	GroundSquare(BaseTree* thisSquaresTree);
	GroundSquare(int ID, char squareID);
	
private: 
	BaseTree* mainTree;
	BaseTree* growingTree;
	Terrain terrain;
	int acorns;

};
