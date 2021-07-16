#pragma once
#include <string>
#include <vector>
#include "Event.h"
#include "Wound.h"
#include "GroundSquare.h"




class BaseTree {
public:
	std::string name;

	void Grow(float sun, double water);
	int getAge() { return age; }
	float getSymmetry() { return symmetry; }
	float getHealth() { return health; }
	double getHeight() { return height; }
	void getConnections();
	double getWater() { return water; }
	double getN() { return storedN; }
	double getPh() { return storedPh; }
	double getMa() { return storedMa; }
	double getN() { return storedN; }

	void setAge(int newAge) {
		age = newAge;
	};

	BaseTree();

private:
	float symmetry;
	float fullSun;
	float health;
	double height;
	int connectedness;
	double storedWater;
	double storedN;
	double storedPh;
	double storedMa;
	groundSubSquare location;
	enum growthStage { sprout, seedling, sapling, juvenile, adult };
	enum treeType { deciduous, coniferous };
	std::vector<BaseTree*> connections;
	std::vector<Wound> wounds;

	//Event DieEvent;
	//Event ReproduceEvent;

	void Die();
	void attractInsects();
	void warnOfDanger();
	void pullWaterFromEarth(groundSubSquare square);
	void dropLeaves(); //deciduous only
	void needWater();
	void needNutrients(std::string nutrient, double amount);




};