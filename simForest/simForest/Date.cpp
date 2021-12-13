#include "Date.h"
#include "Weather.h"


Date::Date()
{
	Day = 20;
	Month = 3;
	Year = 1912;
	seasonNow = SPRING;
	todaysWeather = new Weather();
}

Date::~Date()
{
    delete todaysWeather;
}

Date& Date::operator=(const Date& rhs)
{
	this->Day = rhs.Day;
	this->Month = rhs.Month;
	this->Year = rhs.Year;
	this->seasonNow = rhs.seasonNow;
	this->todaysWeather = new Weather();

    return *this;
    
}

void Date::AdvanceDate()
{

	if((this->Day == 30) && (this->Month == 9 || 4 || 6 || 11))
	{
		this->Day = 1;
		this->Month++;
	}

	else if ((this->Day == 31) && (this->Month == 1 || this->Month == 3 || 5 || 7 || 8 || 9 || 10))
	{
		this->Day++;
	}

	else if ((this->Day == 28) && (this->Month == 2))
	{
		this->Day = 1;
		this->Month = 3;
	}

	else if ((this->Day == 31) && (this->Month == 12))
	{
		this->Day = 1;
		this->Month = 1;
		this->Year++;
	}

	else
	{
		this->Day++;
	}
}

bool Date::operator< (const Date& d) const
{
	if (this->Day < d.Day && this->Month < d.Month && this->Year < d.Year)
	{
		return true;
	}

    return false;
}

bool Date::operator== (const Date& d) const
{
	if ((this->Day == d.Day) && (this->Month == d.Month) && (this->Year == d.Year))
	{
		return true;
	}

    return false;
}

bool Date::operator> (const Date& d) const
{
	if (this->Day < d.Day && this->Month < d.Month && this->Year < d.Year)
	{
		return true;
	}

    return false;
}
