#include "Event.h"
#include "Date.h"
#include "SimulationExecutive.h"


Event::Event()
{
	date = Date();
	weight = 1;
}

Event::Event(Date startDate)
{
	date = startDate;
	weight = 1;
}

Event::Event(Date eventDate, int eventWeight)
{
	date = eventDate;
	weight = eventWeight;
}

void Event::setDate(Date d)
{
	date = d;
}


Date Event::getDate()
{
	return date;
}


bool Event::operator< (const Event& e) const
{

	Date d = SimulationExecutive::getSimExec()->getSimulationDate();
	if ( (e.date < d)  && (e.weight < this->weight))
	{
		return true;
	}

    return false;
}

bool Event::operator== (const Event& e) const
{
	Date d = SimulationExecutive::getSimExec()->getSimulationDate();
	if ((e.date == d) && (e.weight == this->weight))
	{
		return true;
	}

    return false;
}

bool Event::operator> (const Event& e) const
{
	Date d = SimulationExecutive::getSimExec()->getSimulationDate();
	if ((e.date> d) && (e.weight > this->weight))
	{
		return true;
	}

    return false;
}


