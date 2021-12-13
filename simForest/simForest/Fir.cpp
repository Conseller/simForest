#include "Fir.h"
#include "GroundSubSquare.h"
#include "BaseTree.h"

Fir::Fir()
{
	setAge(100);
	symmetry = 1.0;
	fullSun = 1.0;
	health = 1.0;
	height = 30;
	connectedness = 0;
	storedWater = 100;
	storedN = 100;
	storedPh = 100;
	storedMa = 100;
}


Fir::Fir(GroundSubSquare location)
{
	name = "jim";
	age = 100;
	symmetry = 1.0;
	fullSun = 1.0;
	health = 1.0;
	height = 30;
	connectedness = 0;
	storedWater = 100;
	storedN = 100;
	storedPh = 100;
	storedMa = 100;
	treeSpecies = BaseTree::TreeSpecies::FIR;
	treeType = BaseTree::TreeType::CONIFEROUS;
	growthStage = BaseTree::GrowthStage::ADULT;
}

