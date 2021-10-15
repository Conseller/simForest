#pragma once

#include<vector>
#include<string>
#include <iostream>
#include "Terrain.h"
#include "BaseTree.h"
#include "Map.h"
#include "GroundSubSquare.h"

/*
* Weather is going to be really important for making sure this all works and all the trees don't slowly die. Gonna take some balancing
* also maybe get an idea of what the weather is like in central Germany during the times of the year. 
*/

class Weather {
public:
	Weather();
	std::string todaysWeather;

private:
	double temperature;
	double humidity;
	double windspeed;
	enum WindDirection{N,E,S,W,NE,NW,SE,SW};
	WindDirection todaysWind;

	void Rain(Square square, double howMuch);
	std::string describeWeather();
	void windStorm(std::vector<std::shared_ptr<BaseTree>> allTheTrees, double windspeed);
};