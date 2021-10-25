#include "BaseTree.h"


void BaseTree::addConnections(std::shared_ptr<BaseTree> connection)
{ 
	connections.push_back(connection); //add connected tree pointer to this.connections, what the problem is
	std::shared_ptr<BaseTree> thisTreePointer = std::make_shared<BaseTree>(this);
	connection->addConnections(thisTreePointer); //add this tree to the connections of the tree that's being connected to
	this->connectedness++; 
}
