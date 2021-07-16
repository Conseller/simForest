#pragma once
#include "Event.h"
#include "BaseTree.h"

class GrowEvent : public Event
{
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTrees);
};