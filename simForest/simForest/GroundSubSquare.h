#pragma once

#include "Terrain.h"
#include <memory>

/**
* 
* Represents the terrain that the tree is growing in. Each ground square can hold an adult tree and a juvenile tree for now, maybe more later??
*/

class BaseTree;

class GroundSubSquare 
{
public:
	int ID;
	char squareID;
	Terrain terrain;

	GroundSubSquare();
	GroundSubSquare(std::shared_ptr<BaseTree> thisSquaresTree);
	GroundSubSquare(int ID, char squareID);
	~GroundSubSquare() = default;

	
protected: 
	std::shared_ptr<BaseTree> mainTree;
	std::shared_ptr<BaseTree> growingTree;
	//int acorns;

};
