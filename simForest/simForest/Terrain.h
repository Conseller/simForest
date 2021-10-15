#pragma once

//What nutrients and qualities does the actual ground have?

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