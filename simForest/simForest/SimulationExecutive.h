#pragma once
#include <queue>
#include "Event.h"
#include "Date.h"
#include <memory>

/*
* Does all the work of the simulation, holds the event queue that makes the things happen
*/

class SimulationExecutive {

	std::queue<std::shared_ptr<Event>> eventQueue; //Event Queue holds the Events to be executed.
	Event firstEvent;//Event that starts the simulation
	Date currentDate;
	bool hasNextEvent;
	bool isEndOfDay;
	void endOfDay(); //changes weather, date, things that change from day to day but are not events
	Date getSimulationDate();

public:
	SimulationExecutive();
	void scheduleEventAt(Date date, int weight, Event* eventToSchedule); //schedules an event to occur on a certain date
	void scheduleEventIn(int delay, int weight, Event* eventToSchedule); //schedules an event to occur after a certain delay
	void runSimulation(); //start simulation
	void runSimulationOneDay();// run simulation for one day and then stop
	void addEvent(Event eventToAdd); //add event to event queue
};