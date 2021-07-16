#pragma once
#include "Date.h"

class Event {



public:
	void ExecuteEvent();	
	Event(Date eventDate, int eventWeight);
	Event();
	Date date;
	int weight;
};