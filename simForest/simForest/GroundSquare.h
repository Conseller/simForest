#pragma once

#include "Terrain.h"
#include "BaseTree.h"


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

};