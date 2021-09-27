#pragma once
#include "Date.h"

/*
* The mitochondria of the simulation. Events drive time forward in the simulation and control the behavior of the trees and other objects. 
* This is the base class, other events describing different behavior will inherit from this class and be held in the event queue in the Simulation Executive
*/


class Event {



public:
	void ExecuteEvent();	
	Event(Date eventDate, int eventWeight);
	Event();
	Date date;
	int weight;
};