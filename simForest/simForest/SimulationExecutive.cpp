#include "SimulationExecutive.h"


SimulationExecutive::SimulationExecutive()
{
	currentDate = getSimulationDate();
	firstEvent = GrowEvent(currentDate);
	eventQueue.push(firstEvent);
	hasNextEvent = true;
	isEndOfDay = false;
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

void SimulationExecutive::runSimulationOneDay()
{
	while(hasNextEvent && !isEndOfDay)
	{
		isEndOfDay = false;
		Event currentEvent = eventQueue.front();
		if (currentEvent.date > currentDate)
		{
			endOfDay();
			isEndOfDay = true;
			Continue();
		}
		currentEvent.ExecuteEvent();
		eventQueue.pop();
		if (eventQueue.size() == 0)
		{
			hasNextEvent = false;
		}

	}
}

void SimulationExecutive::Continue()
{
	std::cout << "Press any Key to Continue" << std::endl;
	std:getchar();
	return;
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