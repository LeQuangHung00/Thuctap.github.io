#include <iostream>
using namespace std;

class ZooAnimal
{
protected:
	char* name;
	int cageNumber;
	int weightDate;
	int weight;
public:
	ZooAnimal();
	ZooAnimal(const char* a, int b, int c, int d)
	{
		int len = sizeof a;
		this->name = new char[len];
		this->cageNumber = b;
		this->weightDate = c;
		this->weight = d;
	}
	inline ~ZooAnimal() { delete[] name; }; // destructor function
	void changeWeight(int pounds);
	char* reptName();
	int reptWeight();
	int daysSinceLastWeighed(int today);
};
// -------- member function to return the animal's name
char* ZooAnimal::reptName()
{
	return name;
}

class Mammal
{
protected:
	float minimumVolume;
	int minimumWeight;
public:
	Mammal(float a, int b)
	{
		this->minimumVolume = a;
		this->minimumWeight = b;
	}// constructor function
	inline ~Mammal() {}; // destructor function
	float reptminimumVolume();
	int reptminimumWeight();
};

class LargeAnimal : public ZooAnimal, public Mammal
{
protected:
	char* species;
	float cageMinimumVolume;
public:
	LargeAnimal();
	LargeAnimal(const char* a, int b, int c, int d, const char* e, float f)
	{
		ZooAnimal(a, b, c, d);
		int len1 = sizeof e;
		this->species = new char[len1];
		this->cageMinimumVolume = f;
	}
	inline ~LargeAnimal() { delete[] species; }; // destructor function
	float reptCageMinimumVolume();
};
