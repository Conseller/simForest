#pragma once
#include <string>
#include <vector>




class BaseTree{
public:
	std::string name;

	void Grow(float sun, double water);

private:
	int age;
	float symmetry;
	float fullSun;
	float health;
	double height;
	int connectedness;
	double storedWater;
	double storedN;
	double storedPh;
	double StoredMa;
	enum growthStage {sprout, seedling, sapling, juvenile, adult};
	enum treeType {deciduous, coniferous};
	std::vector<baseTree> connections;
	std::vector<Wound> wounds;

	void Reproduce();
	void Die();
	void attractInsects();
	void warnOfDanger();
	void pullWaterFromEarth(Square square);
	void dropLeaves(); //deciduous only
	void needWater();
	void needNutrients(double nutrient);




}