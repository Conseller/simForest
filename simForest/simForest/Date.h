#pragma once
// #include "Weather.h"

/**
* 
* Represents the date, rolls over realistically from month to month and year to year. Keeps track of time passed in the simulation.
* Simulation begins on the first day of spring 1912
* 
*/

class Weather;

class Date {

	

    Weather* todaysWeather;



public:
	enum season { SPRING, SUMMER, FALL, WINTER };


	int Day;
	int Month;
	int Year;
	season seasonNow;

	Date();
    Date(const Date& src) = delete;
	~Date();

    Date& operator=(const Date& rhs);

	void AdvanceDate();
	bool operator<(const Date& d) const;
	bool operator==(const Date& d) const;
	bool operator>(const Date& d) const;
};
