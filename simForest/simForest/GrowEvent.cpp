#include "GrowEvent.h"
#include "Event.h"
#include "BaseTree.h"

using namespace std;

GrowEvent::GrowEvent()
    :date()
{
}

GrowEvent::GrowEvent(std::vector<std::shared_ptr<BaseTree>> pointersToAllTheTrees)
{
	allTheTrees = pointersToAllTheTrees;
}

void GrowEvent::ExecuteEvent()
{
    std::cerr << "Begin Grow Event\n";
    std::cerr << std::flush;
	for (std::shared_ptr<BaseTree> tree : allTheTrees)//what is the correct syntax for this??
	{
		tree->setHeight(tree->getHeight() * GROWTH_RATE);
		tree->setWater(tree->getWater() - 10);
		tree->setN(tree->getN() - 1);
		tree->setPh(tree->getPh() - 1);
		tree->setMa(tree->getMa() - 1);
	}
    std::cerr << "End Grow Event\n";
	
	//effectedTree.height = effectedTree.height * 1.0012526;
	//effectedTree.storedWater = effectedTree.StoredWater - 10;
	//effectedTree.storedN--;
	//effectedTree.storedPh--;
	//effectedTree.storedMa--;
}

inline std::string GrowEvent::getType() const
{
	return "Event Type: Grow";
}
