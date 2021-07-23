#include "GrowEvent.h"
#include "Event.h"
#include "BaseTree.h"
#include <vector>


void GrowEvent::ExecuteEvent(std::vector<BaseTree>& allTheTrees)
{
	for (BaseTree& tree : allTheTrees)
	{
		tree.setHeight(tree.getHeight() * 1.0012526);
		tree.setStoredWater(tree.getStoredWater() - 10);
		tree.storedN--;
		tree.storedPh--;
		tree.storedMa--;
	}
	
	//effectedTree.height = effectedTree.height * 1.0012526;
	//effectedTree.storedWater = effectedTree.StoredWater - 10;
	//effectedTree.storedN--;
	//effectedTree.storedPh--;
	//effectedTree.storedMa--;
}
