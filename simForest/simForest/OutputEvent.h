#pragma once
#include "Event.h"
#include "BaseTree.h"
#include <iostream>
#include <vector>

/*
* output to console for now
*/


class OutputEvent : public Event
{
	std::vector<std::shared_ptr<BaseTree>> allTheTreesPointer;
	std::vector<BaseTree> allTheTrees;
public: 
	void ExecuteEvent(std::vector<std::shared_ptr<BaseTree>> allTheTreesPointer, Weather todaysWeather);
};
