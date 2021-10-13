#include "OutputEvent.h"



void OutputEvent::ExecuteEvent(std::vector<std::shared_ptr<BaseTree>> allTheTreesPointer, Weather todaysWeather)
{
	for(std::shared_ptr<BaseTree> tree : allTheTreesPointer)
	{
		std::cout << "Todays Weather is: " << std::endl;
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << "Tree: " << tree.getName() << " is a" << tree.get std::endl;
		std::cout << "is " << tree.getsymmetry() * 100 " percent symmetrical" << std::endl;
		std::cout << "Health:  " << tree.getHealth() * 100 << std::endl;
		std::cout << "Stored:  " << tree.getWater() << " Gallons of Water"std::endl;
		std::cout << "Stored:  " << tree.getN() << " Units of Nitrogen"std::endl;
		std::cout << "Stored:  " << tree.getPh() << " Units of Phosphorous"std::endl;
		std::cout << "Stored:  " << tree.getMa() << " Units of Magnesium "std::endl;
		tree.getName() << " is Connected to "
			<< foreach(BaseTree * treePointer : tree.getConnections())
		{
			std::cout << treePointer.getName() << std::endl; 
		}
	};
};