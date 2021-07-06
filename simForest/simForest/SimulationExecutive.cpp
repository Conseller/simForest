#include "SimulationExecutive.h"
#include "Date.h"
#include "Event.h"


SimulationExecutive::SimulationExecutive()
{
	currentDate = Date();
	firstEvent = Event();
	eventQueue.push(firstEvent);
}

void SimulationExecutive::runSimulation()
{
	while (hasNextEvent)
	{
		Event currentEvent = eventQueue.front();
		currentEvent.ExecuteEvent();
		eventQueue.pop();
	}
}

void SimulationExecutive::endOfDay()
{
	currentDate = currentDate.AdvanceDate(currentDate);
	std::sort(eventQueue.front(), eventQueue.back());
}