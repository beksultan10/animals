#pragma once
#include "pet.h"
#include <iostream>
#include <string>

using namespace std;
class dog : public pet
{
	string type;
	string gettype();
public:
	enum { Alabai, Rottveiler, Doberman, Bulterier };
	dog();
	dog(string tp, string nm, size_t ag, string hng);
	void Sound() override;
	void Show() override;
	void Type() override;
};


dog.cpp
#include "dog.h"

dog::dog()
{
}

dog::dog(string tp, string nm, size_t ag, string hng) : pet (nm, ag, hng)
{
	type = tp;
}

void dog::Sound()
{
	cout << "gav gav" << endl;
}

void dog::Show()
{
	cout << getname << endl;
}

void dog::Type()
{

}
