#include "SimulationExecutive.h"
#include "Date.h"
#include "Event.h"


SimulationExecutive::SimulationExecutive()
{
	currentDate = Date();
	firstEvent = Event(currentDate);
	eventQueue.push(firstEvent);
	hasNextEvent = true;
}

void SimulationExecutive::runSimulation()
{
	while (hasNextEvent)
	{
		Event currentEvent = eventQueue.front();
		if (currentEvent.date > currentDate)
		{
			endOfDay();
		}
		currentEvent.ExecuteEvent();
		eventQueue.pop();
		if (eventQueue.size() == 0)
		{
			hasNextEvent = false;
		}
	}
}

void SimulationExecutive::endOfDay()
{
	currentDate = currentDate.AdvanceDate(currentDate);
	std::sort(eventQueue.front(), eventQueue.back());
}