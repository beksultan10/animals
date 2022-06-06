#pragma once
#include <iostream>
#include <string>

using namespace std;
class pet
{
	string name;
	size_t age;
	string hang;
public:
	pet();
	pet(string nm, size_t ag, string hng);

	virtual void Sound() = 0;
	virtual void Show() = 0;
	virtual void Type() = 0;

	string getname();
	size_t getage();
	string gethang();


};


pet.cpp
#include "pet.h"

pet::pet()
{
}

pet::pet(string nm, size_t ag, string hng)
{
	name = nm;
	age = ag;
	hang = hng;
}

string pet::getname()
{
	return this->name;

}

size_t pet::getage()
{
	return this->age;
}

string pet::gethang()
{
	return this->hang;
}
