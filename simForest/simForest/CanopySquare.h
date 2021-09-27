#pragma once
#include "Microclimate.h"


class CanopySquare {
	int ID;
	float sunCoverage; // sun coverage = symmetry * modifier for tree size
	Microclimate microclimate;
};