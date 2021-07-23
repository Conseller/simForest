#include "Weather.h"
#include "Terrain.h"
#include <iostream>


Weather::Weather() {
	temperature = 20;
	humidity = 50.0;
	windspeed = 10;
	todaysWind = NE;
}



void Weather::Rain(Map map, double howMuch)
{
	for(groundSubSquare square : map)//needs fixed
	{
		square.terrain.water = square.terrain.water + howMuch;
	}
}

void Weather::windStorm(std::vector<BaseTree> allTheTrees, double windspeed)
{
	for(BaseTree tree : allTheTrees)
	{
		if (windspeed > 20 && tree.symmetry < 70)
		{
			tree.addWound("broken limb")
		};
		if (windspeed > 40 && tree.symmetry < 80)
		{
			tree.addWound("broken limb")
		};
		if (windspeed > 60 && tree.symmetry < 90)
		{
			tree.addWound("broken limb")
		};
		if (windspeed > 80 && tree.symmetry < 95)
		{
			tree.addWound("broken limb")
		};

		if (windspeed > 120 && tree.symmetry < 95)
		{
			tree.Die();//gets blown over if it fails a roll
		};

	}
};