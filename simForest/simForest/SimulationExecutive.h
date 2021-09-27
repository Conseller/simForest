#pragma once
#include <queue>
#include "Event.h"
#include "Date.h"
#include <memory>


class SimulationExecutive {

	std::queue<std::shared_ptr<Event>> eventQueue;
	Event firstEvent;
	Date currentDate;
	bool hasNextEvent;
	void endOfDay();
	Date getSimulationDate();

public:
	SimulationExecutive();
	void scheduleEventAt(Date date, int weight, Event* eventToSchedule);
	void scheduleEventIn(int delay, int weight, Event* eventToSchedule);
	void runSimulation();
	void addEvent(Event eventToAdd);
};