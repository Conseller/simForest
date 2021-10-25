#include "Weather.h"


Weather::Weather() {
	temperature = 20;
	humidity = 50.0;
	windspeed = 10;
	todaysWind = NE;
}


/*
void Weather::Rain(Square square, double howMuch)
{
	for(GroundSubSquare subSquare : square)//needs fixed
	{
		subSquare.terrain.addWater(howMuch);
	}
}*/

std::string Weather::describeWeather()
{
	return "it's a beautiful day";
}

void Weather::windStorm(std::vector<std::shared_ptr<BaseTree>>& allTheTrees, double windspeed)
{
	for(std::shared_ptr<BaseTree> tree : allTheTrees)
	{
		if (windspeed > 20 && tree->getSymmetry() < 70)
		{
			tree->addWound("BrokenLimb");
		}
		if (windspeed > 40 && tree->getSymmetry() < 80)
		{
			tree->addWound("BrokenLimb");
		}
		if (windspeed > 60 && tree->getSymmetry() < 90)
		{
			tree->addWound("BrokenLimb");
		}
		if (windspeed > 80 && tree->getSymmetry() < 95)
		{
			tree->addWound("BrokenLimb");
		}

		if (windspeed > 120 && tree->getSymmetry() < 80)
		{
			tree->die();//gets blown over if it fails a roll
		}

	}
}
