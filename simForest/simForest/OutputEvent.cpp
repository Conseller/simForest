#include "OutputEvent.h"
#include "BaseTree.h"
#include <iostream>
#include <vector>


OutputEvent::ExecuteEvent(vector<BaseTree> allTheTrees, Weather todaysWeather)
{
	foreach(BaseTree tree : allTheTrees)
	{
		std::cout << "Todays Weather is: " << std::endl;
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << std::endl; 
		std::cout << "Tree: " tree.getName() << std::endl;
		std::cout << "is " tree.getsymmetry() * 100 " percent symmetrical" << std::endl;
		std::cout << "Health: " tree.getHealth() * 100 << std::endl;
		std::cout << "Stored: " tree.getWater() << " Gallons of Water"std::endl;
		std::cout << "Stored: " tree.getN() << " Units of Nitrogen"std::endl;
		std::cout << "Stored: " tree.getPh() << " Units of Phosphorous"std::endl;
		std::cout << "Stored: " tree.getMa() << " Units of Magnesium "std::endl;
	};
};