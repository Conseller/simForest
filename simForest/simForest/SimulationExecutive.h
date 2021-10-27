#pragma once
#include <iostream>
#include <memory>
#include <queue>

#include "Date.h"
#include "Event.h"
#include "GrowEvent.h"


/*
* Does all the work of the simulation, holds the event queue that makes the things happen
*/

class SimulationExecutive {

private:
    static SimulationExecutive* thePtr;

public:
    static SimulationExecutive* getSimExec()
    {
        if (thePtr == nullptr) {
            thePtr = new SimulationExecutive();
        }

        return thePtr;
    }

private:

	std::queue<Event*> eventQueue; //Event Queue holds the Events to be executed.
	Event firstEvent;//Event that starts the simulation
	Date currentDate;
	bool hasNextEvent;
	bool isEndOfDay;
	void endOfDay(); //changes weather, date, things that change from day to day but are not events
	void Continue();

public:
	SimulationExecutive();
	void scheduleEventAt(Date date, int weight, Event* eventToSchedule); //schedules an event to occur on a certain date
	void scheduleEventIn(int delay, int weight, Event* eventToSchedule); //schedules an event to occur after a certain delay
	void runSimulation(); //start simulation
	void runSimulationOneDay();// run simulation for one day and then stop
	Date getSimulationDate();
	void addEvent(Event* eventToAdd); //add event to event queue
};
