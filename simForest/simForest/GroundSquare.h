#pragma once

#include "Terrain.h"
#include "BaseTree.h"


class groundSubSquare {
public:
	int ID;
	char squareID;

	groundSubSquare(BaseTree* thisSquaresTree);
	groundSubSquare(int ID, char squareID);
	
private: 
	BaseTree* mainTree;
	BaseTree* growingTree;
	Terrain terrain;

};