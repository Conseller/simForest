#include "SimulationExecutive.h"
#include "Date.h"
#include "Event.h"


SimulationExecutive::SimulationExecutive()
{
	currentDate = Date();
	firstEvent = GrowEvent(currentDate);
	eventQueue.push_back(firstEvent);
	hasNextEvent = true;
	isEndOfDay = false;
}

void SimulationExecutive::runSimulation()
{
	while (hasNextEvent)
	{
		std::shared_ptr<Event>currentEvent = eventQueue.front();
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

void SimulationExecutive::runSimulationOneDay()
{
	while(hasNextEvent && !isEndOfDay)
	{
		isEndOfDay = false;
		std::shared_ptr<Event>currentEvent = eventQueue.front();
		if (currentEvent.date > currentDate)
		{
			endOfDay();
			isEndOfDay = true;
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

void SimulationExecutive::addEvent(Event eventToAdd)
{
	eventQueue.push(eventToAdd);
}