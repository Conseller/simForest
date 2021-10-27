#pragma once
// #include "Weather.h"

/*
* Represents the date, rolls over realistically from month to month and year to year. Keeps track of time passed in simulation
*/

class Weather;

class Date {

	

	Weather* todaysWeather;



public:
	enum season { SPRING, SUMMER, FALL, WINTER };


	int Day;
	int Month;
	int Year;

	Date();
	Date AdvanceDate(Date currentDate);
	bool operator<(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator>(const Date& d) const;
};
