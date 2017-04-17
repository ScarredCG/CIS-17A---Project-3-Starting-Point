#pragma once
#include <string>
#include <vector>

class Adventurers
{

private:
	std::string _name;

public:
	Adventurers(std::string name);
	~Adventurers();

	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + "Attacks!"; }

};