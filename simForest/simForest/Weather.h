#pragma once

#include<vector>
#include "BaseTree.h"
#include "Map.h"

class Weather {
public:
	Weather();

private:
	double temperature;
	double humidity;
	double windspeed;
	enum WindDirection{N,E,S,W,NE,NW,SE,SW};
	WindDirection todaysWind;


	void Rain(Map map, double howMuch);
	void windStorm(std::vector<BaseTree> allTheTrees, double windSpeed);
};