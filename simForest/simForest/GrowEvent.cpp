#include "GrowEvent.h"
#include "Event.h"
#include "BaseTree.h"
#include <vector>


GrowEvent::GrowEvent(std::vector<BaseTree>* allTheTrees)
{
	allTheTreesPointer = allTheTrees;
}

void GrowEvent::ExecuteEvent()
{
	for (BaseTree& tree : allTheTrees)
	{
		tree.setHeight(tree.getHeight() * 1.0012526);
		tree.setWater(tree.getWater() - 10);
		tree.setN(tree.getN() - 1);
		tree.setPh(tree.getPh() - 1);
		tree.setMa(tree.getMa() - 1);
	}
	
	//effectedTree.height = effectedTree.height * 1.0012526;
	//effectedTree.storedWater = effectedTree.StoredWater - 10;
	//effectedTree.storedN--;
	//effectedTree.storedPh--;
	//effectedTree.storedMa--;
}
