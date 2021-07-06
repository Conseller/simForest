#pragma once
#include <queue>
#include "Event.h"
#include "Date.h"


class SimulationExecutive {

	std::queue<Event> eventQueue;
	Event firstEvent;
	Date currentDate;

	
	SimulationExecutive();
	void scheduleEventAt(Date date, int weight, Event* eventToSchedule);
	void scheduleEventIn(int delay, int weight, Event* eventToSchedule);
	void runSimulation();
	void endOfDay();
	bool hasNextEvent();
	Date getSimulationDate();
};