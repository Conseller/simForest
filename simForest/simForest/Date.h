#pragma once
#include "Weather.h"

class Date {
	int Day;
	int Month;
	int Year;

	Weather todaysWeather;
	


public:
	Date();
	Date AdvanceDate(Date currentDate);
};