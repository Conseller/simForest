#pragma once

#include<vector>
#include "BaseTree.h"
#include "Map.h"

/*
* Weather is going to be really important for making sure this all works and all the trees don't slowly die. Gonna take some balancing
* also maybe get an idea of what the weather is like in central Germany during the times of the year. 
*/

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