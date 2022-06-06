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
