#pragma once
#include <string>
#include "Adventurers.h"
class Warrior : public Adventurers
{
public:
	Warrior(std::string name);
	~Warrior();

	std::string Attack() { return GetName() + " swings their sword at the darkness!"; }
};

