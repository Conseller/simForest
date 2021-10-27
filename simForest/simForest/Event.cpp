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

bool Event::operator< (const Event& e)
{
	Date d = SimulationExecutive::getSimExec()->getSimulationDate();

	if ( (e.date < d)  && (e.weight < this->weight))
	{
		return true;
	}
}

bool Event::operator== (const Event& e)
{
	Date* d = &simExec.getSimulationDate();
	if ((e.date == *d) && (e.date.Month == d->Month) && (e.date.Year == d->Year) && (e.weight == this->weight))
	{
		return true;
	}
}

bool Event::operator> (const Event& e)
{
	Date* d = &simExec.getSimulationDate();
	if ((e.date.Day > d->Day) || (e.date.Month > d->Month) || (e.date.Year > d->Year) && (e.weight > this->weight))
	{
		return true;
	}
}
