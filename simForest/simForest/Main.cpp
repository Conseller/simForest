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
#include <memory>




int main(int argc, char** argv)
{
	GroundSubSquare firstTreeLocation(1, 'A');
	Oak testTree(firstTreeLocation);
	SimulationExecutive* simExec = SimulationExecutive::getSimExec();

	std::vector<std::shared_ptr<BaseTree>> allTheTrees;

    auto testTreePtr = std::shared_ptr<BaseTree>(new Oak(firstTreeLocation));
    allTheTrees.push_back(testTreePtr);


	Map map;
	Event* firstDayGrow = new GrowEvent(allTheTrees);
	Event* firstDayOutput = new OutputEvent(allTheTrees);

	simExec->addEvent(firstDayGrow);
	simExec->addEvent(firstDayOutput);
	simExec->runSimulation();
	//return 0;
}
