#pragma once

#include "Terrain.h"
#include "BaseTree.h"


class groundSubSquare {
public:
	int ID;
	
private: 
	BaseTree* mainTree;
	BaseTree* growingTree;
	Terrain terrain;

};