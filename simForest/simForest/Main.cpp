#include "SimulationExecutive.h"
#include "Event.h"
#include "Date.h"
#include "GroundSubSquare.h"
#include "Oak.h"
#include "Fir.h"
#include "BaseTree.h"
#include "GrowEvent.h"
#include "OutputEvent.h"
#include "Map.h"
#include <vector>




int main(int argc, char** argv)
{
	GroundSubSquare firstTreeLocation(1, 'A');
	GroundSubSquare secondTreeLocation(2, 'A');
	GroundSubSquare thirdTreeLocation(3, 'A');
	GroundSubSquare fourthTreeLocation(4, 'A');
	Oak oakTree1(firstTreeLocation);
	Fir firTree1(secondTreeLocation);
	Oak oakTree2(thirdTreeLocation);
	Fir firTree2(fourthTreeLocation);

	SimulationExecutive* simExec = SimulationExecutive::getSimExec();

	std::vector<std::shared_ptr<BaseTree>> allTheTrees;


	Map map;
	Event* firstDayGrow = new GrowEvent(allTheTrees);
	Event* firstDayOutput = new OutputEvent(allTheTrees);

	simExec->addEvent(firstDayGrow);
	simExec->addEvent(firstDayOutput);
	simExec->runSimulation();
	//return 0;
}
