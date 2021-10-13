#pragma once

#include "Terrain.h"
#include <memory>
/*
* Represents the terrain that the tree is growing in. Each ground square can hold an adult tree and a juvenile tree for now, maybe more later??
*/
class BaseTree;

class GroundSquare {
public:
	int ID;
	char squareID;

	GroundSquare();
	GroundSquare(std::shared_ptr<BaseTree> thisSquaresTree);
	GroundSquare(int ID, char squareID);
	
private: 
	std::shared_ptr<BaseTree> mainTree;
	std::shared_ptr<BaseTree> growingTree;
	Terrain terrain;
	//int acorns;

};
