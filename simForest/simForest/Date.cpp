#include "Date.h"


Date::Date()
{
	Day = 20;
	Month = 3;
	Year = 1912;
	todaysWeather = Weather();
}

Date Date::AdvanceDate(Date currentDate)
{

	if((currentDate.Day == 30) && (currentDate.Month == 9 || 4 || 6 || 11))
	{
		currentDate.Day = 1;
		currentDate.Month++;
	}

	else if ((currentDate.Day == 31) && (currentDate.Month == 1 || 3 || 5 || 7 || 8 || 9 || 10))
	{
		currentDate.Day++;
	}

	else if ((currentDate.Day == 28) && (currentDate.Month == 2))
	{
		currentDate.Day = 1;
		currentDate.Month = 3;
	}

	else if ((currentDate.Day == 31) && (currentDate.Month == 12))
	{
		currentDate.Day = 1;
		currentDate.Month = 1;
		currentDate.Year++;
	}

	else
	{
		currentDate.Day++;
	}

	return currentDate;
}

bool Date::operator< (const Date& d)
{
	if (this->Day < d.Day && this->Month < d.Month && this->Year < d.Year)
	{
		return true;
	}
}

bool Date::operator== (const Date& d)
{
	if ((this->Day = d.Day) && (this->Month = d.Month) && (this->Year = d.Year))
	{
		return true;
	}
}

bool Date::operator> (const Date& d)
{
	if (this->Day < d.Day && this->Month < d.Month && this->Year < d.Year)
	{
		return true;
	}
}