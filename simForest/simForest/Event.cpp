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
	Date* d = simExec.getSimulationDate();

	if ( e.date.Day < d->Day && e.date.Month < d->Month && e.date.Year < d->Year)
	{
		return true;
	}
}

bool Event::operator== (const Event& e)
{
	Date* d = simExec.getSimulationDate();
	if ((e.date.Day == d->Day) && (e.date.Month == d->Month) && (e.date.Year == d->Year))
	{
		return true;
	}
}

bool Event::operator> (const Event& e)
{
	Date* d = simExec.getSimulationDate();
	if (e.date.Day < d->Day && e.date.Month < d->Month && e.date.Year < d->Year)
	{
		return true;
	}
}