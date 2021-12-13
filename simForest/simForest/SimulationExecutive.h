#pragma once
#include <iostream>
#include <memory>
#include <vector>

#include "Date.h"
#include "Event.h"
#include "GrowEvent.h"


/**
* Does all the work of the simulation, holds the event queue that makes the things happen.
* Knows the simulation time, holds and sorts events in the EventQueue
*/

class SimulationExecutive {

private:
    static SimulationExecutive* thePtr;

public:
    static inline SimulationExecutive* getSimExec()///< Checks to see if a SimExec object already exists. If it doesn't it makes one, 
    {
        if (thePtr == nullptr) {
            thePtr = new SimulationExecutive();
        }

        return thePtr;
    }

private:

	std::vector<Event*> eventQueue; ///< Event Queue holds the Events to be executed.
	GrowEvent firstEvent;///< Event that starts the simulation, comes from main
	Date currentDate;
	bool hasNextEvent;
	bool isEndOfDay;
	
	void Continue();

public:
	SimulationExecutive();
	~SimulationExecutive() = default;
	void scheduleEventAt(Date date, int weight, Event* eventToSchedule); ///< Schedules an event to occur on a certain date
	void scheduleEventIn(int delay, int weight, Event* eventToSchedule); ///< Schedules an event to occur after a certain delay
	void runSimulation();
	void runSimulationOneDay();///< Run simulation for one day and then stop
	const Date& getSimulationDate();
	void addEvent(Event* eventToAdd); ///< Add event to event queue
	void endOfDay(); ///< Changes weather, date, things that change from day to day but are not events
};
