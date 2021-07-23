#include "GrowEvent.h"
#include "Event.h"
#include "BaseTree.h"
#include <vector>


GrowEvent::ExecuteEvent(vector<BaseTree>& allTheTrees)
{
	foreach(BaseTree tree : allTheTrees)
	{
		tree.height = tree.height * 1.0012526;
		tree.storedWater = tree.storedWater - 10;
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

GrowEvent::GrowEvent()
{

}