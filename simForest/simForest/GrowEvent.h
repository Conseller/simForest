#pragma once
#include "Event.h"
#include "BaseTree.h"
#include <vector>
#include <memory>

class GrowEvent : public Event
{
	std::vector<std::shared_ptr<BaseTree>> allTheTreesPointer;
public:
	const double GROWTH_RATE = 1.0012526;	
	GrowEvent(std::vector<std::shared_ptr<BaseTree>> allTheTrees);
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTrees);
    void ExecuteEvent();
};
