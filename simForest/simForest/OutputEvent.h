#pragma once
#include "Event.h"
#include "BaseTree.h"

/*
* output to console for now
*/


class outputEvent : public Event
{
public: 
	void ExecuteEvent(std::vector<BaseTree> allTheTrees);
};
