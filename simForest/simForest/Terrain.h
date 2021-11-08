#pragma once

/**
* What nutrientsand qualities does the actual ground have ? Trees suck up nutrients in the soil during the transpiration process
* A lack of nutrients can cause stunted growth or certain "Wounds"
* 
*/

class Terrain {
	float rockiness;
	double N;
	double Ph;
	double Ma;
	double water;
public:
	void addWater(double amount);
	void decrementN();
	void decrementPh();
	void decrementMa();
	void decrementWater();
};