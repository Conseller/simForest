#include "BaseTree.h"


void BaseTree::addConnections(BaseTree* connection)
{
	connections.push_back(connection);

    //add this tree to the connections of the tree that's being connected to
	connection->addConnections(this);	this->connectedness++;
}

