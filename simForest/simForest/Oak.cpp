#include "Oak.h"
#include "GroundSquare.h"
#include "BaseTree.h"

Oak::Oak()
{
	setAge(250);
	symmetry = 1.0;
	fullSun = 1.0;
	health = 1.0;
	height = 20;
	connectedness = 0;
	storedWater = 100;
	storedN = 100;
	storedPh = 100;
	storedMa = 100;
	location = groundSubSquare(1, 'A');
}


Oak::Oak(groundSubSquare treeLocation)
{
	age = 250;
	symmetry = 1.0;
	fullSun = 1.0;
	health = 1.0;
	height = 20;
	connectedness = 0;
	storedWater = 100;
	storedN = 100;
	storedPh = 100;
	storedMa = 100;
	location = treeLocation;
}