#pragma once

#include<vector>
#include<string>
#include <iostream>
#include "Terrain.h"
#include "BaseTree.h"
#include "Map.h"
#include "GroundSubSquare.h"

/**
* 
* Weather is going to be really important for making sure this all works and all the trees don't slowly die. Gonna take some balancing
* also maybe get an idea of what the weather is like in central Germany during the times of the year. 
* 
*/

class Weather {
public:
	Weather();
	~Weather();
	std::string todaysWeather;
	enum WindDirection { N, E, S, W, NE, NW, SE, SW };

private:
	double temperatureInCelsius;
	double humidity;
	double windspeed;
	double lengthOfDay;
	WindDirection todaysWind; ///< Wind speed and direction are important to inform the movement of airborne seeds and because of the symmetry and damage systems.

	void Rain(Square square, double howMuch);
	std::string describeWeather();
	void windStorm(std::vector<std::shared_ptr<BaseTree>>& allTheTrees, double windspeed);
};
