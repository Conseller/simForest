#pragma once
#include "Date.h"

class Event {

	Date date;
	int weight;

public:
	void ExecuteEvent();
};