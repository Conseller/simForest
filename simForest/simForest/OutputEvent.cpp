#include "OutputEvent.h"

/**
*
* Event that iterates through a vector of pointers to trees
* and outputs to console for now, later to output to spreadsheet
* 
* @param allTheTreesPointer: a vector of pointers that each point to
* an individual BaseTree object
*/

OutputEvent::OutputEvent(std::vector<std::shared_ptr<BaseTree>> pointerToAllTheTrees)
{
	std::cerr << "Starting OutputEvent::OutputEvent -> " << pointerToAllTheTrees.size() << " to add" << std::endl;
	allTheTreesPointer = pointerToAllTheTrees;
	std::cerr << "Starting OutputEvent::OutputEvent -> " << allTheTreesPointer.size() << " added" << std::endl;

}


void OutputEvent::ExecuteEvent()
{
	std::cerr << "Starting OutputEvent::ExecuteEvent -> " << allTheTreesPointer.size() << " trees to output" << std::endl;


	for(std::shared_ptr<BaseTree> tree : allTheTreesPointer)
	{
		std::cout << "Todays Weather is: " << std::endl;
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << "Tree: " << tree->getName() << " is a" << tree->getTreeSpecies() << " a" << tree->getGrowthStage() << " " << tree->getTreeType() << std::endl;
		std::cout << "and is " << tree->getSymmetry() * 100 << " percent symmetrical" << std::endl;
		std::cout << "Health:  " << tree->getHealth() * 100 << std::endl;
		std::cout << "Stored:  " << tree->getWater() << " Gallons of Water" << std::endl;
		std::cout << "Stored:  " << tree->getN() << " Units of Nitrogen" << std::endl;
		std::cout << "Stored:  " << tree->getPh() << " Units of Phosphorous" << std::endl;
		std::cout << "Stored:  " << tree->getMa() << " Units of Magnesium " << std::endl;
		std::cout << tree->getName() << " is Connected to ";
		std::vector<BaseTree*> treeConnections = tree->getConnections();
		for (BaseTree* treePointer : treeConnections)
		{
			std::cout << treePointer->getName() << std::endl;
		}
	};
};

inline std::string OutputEvent::getType() const
{
	return "Event Type: Output";
}
