#include "Oak.h"
#include "GroundSubSquare.h"
#include "BaseTree.h"

Oak::Oak()
    //:location(1, 'A')
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
}


Oak::Oak(GroundSubSquare location)
    //:location(location)
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
}

