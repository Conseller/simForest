#pragma once

#include <utility>
#include <algorithm>
#include <string>
#include "Date.h"


using namespace std::rel_ops;

/**
* 
* The mitochondria of the simulation. Events drive time forward in the simulation and control the behavior of the trees and other objects. 
* This is the base class, other events describing different behavior will inherit from this class and be held in the event queue in the Simulation Executive
* 
*/


class Event {



public:
	virtual void ExecuteEvent() = 0;	
	Event(Date startDate);
	Event(Date eventDate, int eventWeight);
	Event();

    virtual ~Event() = default;

	void setDate(Date d);
	Date getDate();

	Date date;
	int weight;


	bool operator<(const Event& e) const;
	bool operator==(const Event& e) const;
	bool operator>(const Event& e) const;

   inline virtual std::string getType() const
    {
        return "Event Type: Undefined!!";
    }
};
