#pragma once

#include "Microclimate.h"
#include "BaseTree.h"


/**
* 
* Represents the space immediately above the ground square with the same ID. Indicates how much of the square is covered by tree canopy.
* controls how much light reaches juveniles, and how much available space there is for trees to extend their canopy out as they grow. 
* 
*/


class CanopySubSquare
{
public:
	int ID;
	char squareID;

	CanopySubSquare();
	CanopySubSquare(std::shared_ptr<BaseTree> thisSquaresTree);
	CanopySubSquare(int ID, char squareID);

protected:
	float sunCoverage; // sun coverage = symmetry * modifier for tree size
	Microclimate microclimate;
	std::shared_ptr<BaseTree> mainTree;
	//int acorns;

};
