#pragma once
#include "Event.h"
#include "BaseTree.h"

class outputEvent : public Event
{
public: 
	void ExecuteEvent(std::vector<BaseTree> allTheTrees);
};
