#pragma once
#include "Event.h"
#include "BaseTree.h"
#include <vector>

class GrowEvent : public Event
{
public:
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTrees);
    void ExecuteEvent(std::vector<BaseTree>& allTheTrees);
};
