#include "GrowEvent.h"
#include "Event.h"
#include "BaseTree.h"
#include <vector>



GrowEvent::GrowEvent()
{
	date = Date();
}
GrowEvent::GrowEvent(std::vector<std::shared_ptr<BaseTree>> pointersToAllTheTrees)
{
	allTheTrees = pointersToAllTheTrees;
}

void GrowEvent::ExecuteEvent()
{
	for (std::shared_ptr<BaseTree> tree : allTheTrees)//what is the correct syntax for this??
	{
		tree->setHeight(tree->getHeight() * GROWTH_RATE);
		tree->setWater(tree->getWater() - 10);
		tree->setN(tree->getN() - 1);
		tree->setPh(tree->getPh() - 1);
		tree->setMa(tree->getMa() - 1);
	}
	
	//effectedTree.height = effectedTree.height * 1.0012526;
	//effectedTree.storedWater = effectedTree.StoredWater - 10;
	//effectedTree.storedN--;
	//effectedTree.storedPh--;
	//effectedTree.storedMa--;
}
