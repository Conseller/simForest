#pragma once
#include "Event.h"
#include "BaseTree.h"
#include <vector>
#include <memory>

/**
 * This event adds height to a tree assuming it has access to the light, water
 * and nutrients that it needs to do a full day's growth
 */
class GrowEvent : public Event
{
private:
	std::vector<std::shared_ptr<BaseTree>> allTheTrees;
	//std::vector<BaseTree> allTheTrees;
	Date date;

public:
	const double GROWTH_RATE = 1.0012526;
	GrowEvent(std::vector<std::shared_ptr<BaseTree>> allTheTrees);
	GrowEvent(Date dateOfGrowth);
	void ExecuteEvent(Date date, int weight, BaseTree* effectedTree);
    void ExecuteEvent();
};
