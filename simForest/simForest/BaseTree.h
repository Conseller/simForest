#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Event.h"
#include "Wound.h"
#include "GroundSubSquare.h"

/*
*Base class from which all of the other trees will be inherited
*/

class BaseTree {
public:
	enum GrowthStage { sprout, seedling, sapling, juvenile, adult, stump }; //effects behavior for growth rate, nutrient needs etc
	enum TreeType { deciduous, coniferous }; //effects behavior for reproduction, overwintering etc. 
	enum TreeSpecies {elm, oak, ash, fir, beech, birch, willow};
	
	// GrowthStage growthStage;
	// TreeType treeType;
	TreeSpecies treeSpecies;

	std::string name;

	void die();
	void grow(float sun, double water);

#pragma region Getters and Setters
	int getAge() {
		return age;
	}

	std::string getName() {
		return name;
	}

	float getSymmetry() {
		return symmetry;
	}
	float getHealth()
	{
		return health;
	}

	double getHeight() {
		return height;
	}
	std::vector<std::shared_ptr<BaseTree>> getConnections() {
		return connections;
	}
	double getWater() {
		return storedWater;
	}
	//double decreaseStoredWater(int amount);
	//double decreaseStoredWater();
	GrowthStage getGrowthStage() {
		return growthStage;
	}

	TreeType getTreeType() {
		return treeType;
	}

	TreeSpecies getTreeSpecies() {
		return treeSpecies;
	}


	double getPh() {
		return storedPh;
	}

	double getMa() {
		return storedMa;
	}

	double getN() {
		return storedN;
	}

	void setName(std::string newName) {
		name = newName;
	}

	void setAge(int newAge) {
		age = newAge;
	}

	void setSymmetry(float newSymmetry) {
		symmetry = newSymmetry;
	}

	void setSun(float newSun) {
		fullSun = newSun;
	}

	void setHealth(float newHealth) {
		health = newHealth;
	}

	void setHeight(double newHeight) {
		height = newHeight;
	}

	void setWater(int newWater) {
		storedWater = newWater;
	}

	void setN(int newN) {
		storedN = newN;
	}

	void setPh(int newPh) {
		storedPh = newPh;
	}

	void setMa(int newMa) {
		storedMa = newMa;
	}

	void setLocation(GroundSubSquare newLocation) {
		location = newLocation;
	}

	void setGrowthStage(GrowthStage stage) {
		growthStage = stage;
	}

	void setTreeType(TreeType type) {
		treeType = type;
	}
#pragma endregion


	void addWound(std::string wound); //if the tree gets damaged or has an infestation
	void addConnections(std::shared_ptr<BaseTree> connection); //Trees are connected to their immediate neighbours and can communicate with each other and share resources

protected:
	float symmetry; // value between 0.0 and 1.0 indicating how symmetrical is the tree with 0.0 being the least. 
	int age;
	float fullSun; // value between 0.0 and 1.0 indicating how much sun is being blocked before it reaches the leaves. 1.0 for direct sun and 0.0 for darkness
	float health; // value between 0.0 and 1.0 indicating the overall health of the tree. Wounds, lack of water, low symmetry, and weather events can all lower health
	double height;
	int connectedness; //Trees consider highly connected members of the community to be valuable, a tree that has many connections can serve as a communications hub.
	double storedWater; //amount of water stored by the tree
	double storedN; // amount of nitrogen
	double storedPh; // amount of phosphorous
	double storedMa; // amount of magnesium

	GroundSubSquare location;
	GrowthStage growthStage;
	TreeType treeType;

	std::vector<std::shared_ptr<BaseTree>> connections;
	std::vector<Wound> wounds;

	//Event ReproduceEvent;

	void attractInsects(); //some inherited tree types can attract insects to defend themselves from insect attack
	void warnOfDanger(); // can communicate danger such as insects 
	void pullWaterFromEarth(GroundSubSquare square);
	void dropLeaves(); //deciduous only, should be its own event.
	void needWater();
	void needNutrients(std::string nutrient, double amount);




};
