#include "SimulationExecutive.h"
#include "Event.h"
#include "Date.h"
#include "GroundSquare.h"
#include "Oak.h"
#include "BaseTree.h"
#include <vector>



int main(int argc, char** argv)
{
	GroundSquare firstTreeLocation(1, 'A');
	Oak testTree(firstTreeLocation);

	std::vector<BaseTree> allTheTrees;
	allTheTrees.push_back(testTree);
	GrowEvent firstDayGrow;
	SimulationExecutive.addEvent(firstDayGrow);
	SimulationExecutive simulationExecutive;
	SimulationExecutive.runSimulation();
}
