#pragma once

#include "Square.h"
#include "Microclimate.h"
#include <memory>
/*
*Represents the space immediately above the ground square with the same ID. Indicates how much of the square is covered by tree canopy
*/


class CanopySquare
{
public:
	int ID;
	char squareID;

	CanopySquare();
	CanopySquare(std::shared_ptr<BaseTree> thisSquaresTree);
	CanopySquare(int ID, char squareID);

protected:
	std::shared_ptr<BaseTree> mainTree;
	float sunCoverage; // sun coverage = symmetry * modifier for tree size
	Microclimate microclimate;
	std::shared_ptr<BaseTree> mainTree;
	//int acorns;

};
