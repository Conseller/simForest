#pragma once
#include "Event.h"
#include "BaseTree.h"
#include <vector>

class GrowEvent : public Event
{
	std::vector<BaseTree>* allTheTreesPointer;
public:
	const double GROWTH_RATE = 1.0012526;	
	GrowEvent(std::vector<BaseTree>* allTheTrees);
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTrees);
    void ExecuteEvent();
};
