#pragma once



class Weather {
public:
	Weather();

private:
	double temperature;
	double humidity;
	double windspeed;
	enum WindDirection{N,E,S,W,NE,NW,SE,SW};
	WindDirection todaysWind;


	void Rain();
};