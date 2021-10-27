#include "SimulationExecutive.h"
#include "Event.h"
#include "Date.h"
#include "GroundSubSquare.h"
#include "Oak.h"
#include "BaseTree.h"
#include "GrowEvent.h"
#include "OutputEvent.h"
#include "Map.h"
#include <vector>




int main(int argc, char** argv)
{
	GroundSubSquare firstTreeLocation(1, 'A');
	Oak testTree(firstTreeLocation);
	SimulationExecutive simExec;

	std::vector<std::shared_ptr<BaseTree>> allTheTrees;

	
	Map map;
	GrowEvent firstDayGrow(allTheTrees);
	GrowEvent* firstDayGrowPointer = &firstDayGrow;
	OutputEvent firstDayOutput;
	OutputEvent* firstDayOutputPointer = &firstDayOutput;
	
	simExec.addEvent(firstDayGrowPointer);
	simExec.addEvent(firstDayOutputPointer);
	simExec.runSimulation();
	//return 0;
}
