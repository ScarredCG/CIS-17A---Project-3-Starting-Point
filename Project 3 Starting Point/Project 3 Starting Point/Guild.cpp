#include "Guild.h"
#include <algorithm>
Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}

void Guild::AddAdventurer(std::shared_ptr<Adventurers> newAdventurer)
{
	_adventurers.push_back(newAdventurer);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	//Fix this
	
	//output += _mages.size()		> 0 ? std::to_string(_mages.size()) + " mages\n" : "No mages!\n";
	//output += _rangers.size()	> 0 ? std::to_string(_rangers.size()) + " rangers\n" : "No rangers!\n";
	//output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";
	//output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";

	for (auto adventurer : _adventurers)
	{
		output += adventurer->Attack() + " \n";
	}

	return output;
}
