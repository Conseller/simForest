#include "BaseTree.h"

#include <array>

int BaseTree::nextTreeId = 0;

void BaseTree::addConnections(BaseTree* connection)
{
	connections.push_back(connection);

    //add this tree to the connections of the tree that's being connected to
	connection->addConnections(this);	
	this->connectedness++;
}

//------------------------------------------------------------------------------
const std::array<char*, 6> PRINTABLE_GROWTHSTAGE = {{
    "SPROUT",
    "SEEDLING",
    "SAPLING",
    "JUVENILE",
    "ADULT",
    "STUMP"
}};

std::ostream& operator<<(std::ostream& outs, BaseTree::GrowthStage theStage)
{
    outs << PRINTABLE_GROWTHSTAGE[theStage];
    return outs;
}
