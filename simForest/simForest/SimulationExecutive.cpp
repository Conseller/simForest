#include <utility>
#include <algorithm>
#include <iostream>

#include "SimulationExecutive.h"


SimulationExecutive* SimulationExecutive::thePtr = nullptr;


SimulationExecutive::SimulationExecutive()
{
	currentDate = getSimulationDate();
	// firstEvent.setDate(currentDate);
	// Event* firstEventPointer;
	// eventQueue.push_back(firstEventPointer);
	hasNextEvent = true;
	isEndOfDay = false;
}

void SimulationExecutive::runSimulation()
{
	while (hasNextEvent)
	{
        std::cerr << "There are " << eventQueue.size() << " events\n";
        std::cerr << "Get Event\n";
		Event* currentEvent = eventQueue.front();
        /*
		if (currentEvent->date > currentDate)
		{
			endOfDay();
		}
        */

        std::cerr << "Execute Event -> " << currentEvent->getType() << "\n";

		currentEvent->ExecuteEvent();
		eventQueue.erase(eventQueue.begin());
        delete currentEvent;

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
	currentDate.AdvanceDate();
	std::sort(eventQueue.begin(), eventQueue.end());
}

void SimulationExecutive::addEvent(Event* eventToAdd)
{
	eventQueue.push_back(eventToAdd);
    std::cerr << "Queue Size: " << eventQueue.size() << " | " << eventToAdd->getType() << "\n";
}

const Date& SimulationExecutive::getSimulationDate()
{
	return currentDate;
}
