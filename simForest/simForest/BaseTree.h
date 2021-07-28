#pragma once
#include <string>
#include <vector>
#include "Event.h"
#include "Wound.h"
#include "GroundSquare.h"


class BaseTree {
public:
	enum GrowthStage { sprout, seedling, sapling, juvenile, adult };
	enum TreeType { deciduous, coniferous };

	std::string name;

	void grow(float sun, double water);

	int getAge() {
        return age;
    }

	float getSymmetry() { return symmetry; }
	float getHealth() { return health; }
	double getHeight() { return height; }
	std::vector<BaseTree*> getConnections() { return connections; }
	double getWater() { return storedWater; }
	double decreaseStoredWater(int amount);
	double decreaseStoredWater();
	GrowthStage getGrowthStage() { return growthStage; }
	TreeType getTreeType() { return treeType; }
	double getPh() { return storedPh; }
	double getMa() { return storedMa; }
	double getN() { return storedN; }

	void setName(std::string newName) { name = newName; }
	void setAge(int newAge) {	age = newAge; }
	void setSymmetry(float newSymmetry) {	symmetry = newSymmetry; }
	void setSun(float newSun) {	fullSun = newSun; }
	void setHealth(float newHealth) { health = newHealth; }
	void setHeight(double newHeight) {	height = newHeight; }
	void setWater(int newWater) {	storedWater = newWater; }
	void setN(int newN) {	storedN = newN; }
	void setPh(int newPh) {	storedPh = newPh; }
	void setMa(int newMa) {	storedMa = newMa; }
	void setLocation(GroundSquare newLocation) { location = newLocation; }
	void setGrowthStage(GrowthStage stage) { growthStage = stage; }
	void setTreeType(TreeType type) { treeType = type; }

	void addWounds(std::string woundType);
	void addConnections(BaseTree* connection);


protected:
	float symmetry;
	int age;
	float fullSun;
	float health;
	double height;
	int connectedness;
	double storedWater;
	double storedN;
	double storedPh;
	double storedMa;
	GroundSquare location;
	GrowthStage growthStage;
	TreeType treeType;

	std::vector<BaseTree*> connections;
	std::vector<Wound> wounds;

	//Event ReproduceEvent;

	void Die();
	void attractInsects();
	void warnOfDanger();
	void pullWaterFromEarth(GroundSquare square);
	void dropLeaves(); //deciduous only
	void needWater();
	void needNutrients(std::string nutrient, double amount);




};

void BaseTree::addConnections(BaseTree* connection) 
{ 
	connections.push_back(connection); //add connected tree pointer to this.connections
	BaseTree* thisTreePointer = this;
	connection->addConnections(thisTreePointer); //add this tree to the connections of the tree that's being connected to
	this->connectedness++; 
}
