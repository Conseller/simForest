#pragma once
#include "Event.h"
#include "BaseTree.h"

class GrowEvent : public Event
{
	GrowEvent();
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTrees);
};