#pragma once

#include "Square.h"
#include "Microclimate.h"
#include "BaseTree.h"


/*
*Represents the space immediately above the ground square with the same ID. Indicates how much of the square is covered by tree canopy
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
	std::shared_ptr<BaseTree> mainTree;
	float sunCoverage; // sun coverage = symmetry * modifier for tree size
	Microclimate microclimate;
	std::shared_ptr<BaseTree> mainTree;
	//int acorns;

};
