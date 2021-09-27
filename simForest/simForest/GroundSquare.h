#pragma once

#include "Terrain.h"
/*
* Represents the terrain that the tree is growing in. Each ground square can hold an adult tree and a juvenile tree for now, maybe more later??
*/
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
	//int acorns;

};
