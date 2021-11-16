#include <utility>
#include <algorithm>

#include "SimulationExecutive.h"


SimulationExecutive* SimulationExecutive::thePtr = nullptr;


SimulationExecutive::SimulationExecutive()
{
	currentDate = getSimulationDate();
	firstEvent = GrowEvent(currentDate);
	Event* firstEventPointer;
	eventQueue.push_back(firstEventPointer);
	hasNextEvent = true;
	isEndOfDay = false;
}

void SimulationExecutive::runSimulation()
{
	while (hasNextEvent)
	{
		Event* currentEvent = eventQueue.front();
		if (currentEvent->date > currentDate)
		{
			endOfDay();
		}
		currentEvent->ExecuteEvent();
		eventQueue.erase(eventQueue.begin());
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
		Event* currentEvent = eventQueue.front();
		if (currentEvent->date > currentDate)
		{
			endOfDay();
			isEndOfDay = true;
			Continue();
		}
		currentEvent->ExecuteEvent();
		eventQueue.erase(eventQueue.begin());
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
	std::sort(eventQueue.begin(), eventQueue.end());
}

void SimulationExecutive::addEvent(Event* eventToAdd)
{
	eventQueue.push_back(eventToAdd);
}

Date SimulationExecutive::getSimulationDate()
{
	return currentDate;
}
