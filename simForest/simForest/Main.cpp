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
#include <memory>




int main(int argc, char** argv)
{
	GroundSubSquare firstTreeLocation(1, 'A');
	GroundSubSquare secondTreeLocation(2, 'A');
	GroundSubSquare thirdTreeLocation(3, 'A');
	GroundSubSquare fourthTreeLocation(4, 'A');

	// Oak oakTree1(firstTreeLocation);
	// Fir firTree1(secondTreeLocation);
	// Oak oakTree2(thirdTreeLocation);
	// Fir firTree2(fourthTreeLocation);

	// BaseTree* firstOakRaw = &oakTree1;
	// BaseTree* firstFirRaw = &firTree1;

	SimulationExecutive* simExec = SimulationExecutive::getSimExec();

	std::vector<std::shared_ptr<BaseTree>> allTheTrees;

    auto firstTreePtr = std::shared_ptr<BaseTree>(new Oak(firstTreeLocation));
    auto secondTreePtr = std::shared_ptr<BaseTree>(new Fir(secondTreeLocation));
    auto thirdTreePtr = std::shared_ptr<BaseTree>(new Oak(thirdTreeLocation));
    auto fourthTreePtr = std::shared_ptr<BaseTree>(new Fir(fourthTreeLocation));

    allTheTrees.push_back(firstTreePtr);
    allTheTrees.push_back(secondTreePtr);
    allTheTrees.push_back(thirdTreePtr);
    allTheTrees.push_back(fourthTreePtr);

	//thirdTreePtr->addConnections(firstOakRaw);
	//fourthTreePtr->addConnections(firstFirRaw);



	Map map;

    const int numDays = 10;
	for (int i = 0; i < numDays; ++i)
	{
		//std::cout << "Today's Date is " << simExec->getSimulationDate() << std::endl;
		Event* grow = new GrowEvent(allTheTrees);
		Event* output = new OutputEvent(allTheTrees);
		simExec->addEvent(grow);
		simExec->addEvent(output);
		simExec->endOfDay();
	}

	simExec->runSimulation();
    delete simExec;

	return 0;
}
