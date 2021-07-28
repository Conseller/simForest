#include "SimulationExecutive.h"
#include "Event.h"
#include "Date.h"
#include "GroundSquare.h"
#include "Oak.h"
#include "BaseTree.h"
#include "GrowEvent.h"
#include "Map.h"
#include <vector>




int main(int argc, char** argv)
{
	GroundSquare firstTreeLocation(1, 'A');
	Oak testTree(firstTreeLocation);
	SimulationExecutive simExec;

	std::vector<BaseTree> allTheTrees;
	std::vector<BaseTree>* allTheTreesPointer;
	allTheTrees.push_back(testTree);
	
	Map map;
	GrowEvent firstDayGrow(allTheTreesPointer);
	//OutputEvent firstDayOutput
	simExec.addEvent(firstDayGrow);
	//SimulationExecutive.addEvent
	simExec.runSimulation();
}
