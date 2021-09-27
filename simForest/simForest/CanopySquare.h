#pragma once
#include "Microclimate.h"
/*
*Represents the space immediately above the ground square with the same ID. Indicates how much of the square is covered by tree canopy
*/

class CanopySquare {
	int ID;
	float sunCoverage; // sun coverage = symmetry * modifier for tree size
	Microclimate microclimate;
};