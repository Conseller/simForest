#pragma once
#include "Weather.h"

/*
* Represents the date, rolls over realistically from month to month and year to year. Keeps track of time passed in simulation
*/


class Date {
	int Day;
	int Month;
	int Year;
	enum season{spring, summer, fall, winter};

	Weather todaysWeather;
	


public:
	Date();
	Date AdvanceDate(Date currentDate);
};