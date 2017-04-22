#include "Guild.h"
#include <iostream>
#include <memory>
#include <iterator>

using namespace std;

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

string Guild::GetInfo() //Thank you for going over this in class. I could not figure this part out.
{

	string output = "Your guild has: \n";

	int MageCount = RangerC = WarriorC = PaladinC = 0;

	for (vector<shared_ptr<Adventurers>>::iterator it = _adventurers.begin(); it != _adventurers.end(); it++)
	{

		if (dynamic_pointer_cast<Mage>(*it) != nullptr)
		{

			MageC++;

		}

		else if (dynamic_pointer_cast<Ranger>(*it) != nullptr)
		{

			RangerC++;

		}

		else if (dynamic_pointer_cast<Warrior>(*it) != nullptr)
		{

			WarriorC++;

		}

		else if (dynamic_pointer_cast<Paladin>(*it) != nullptr)
		{

			PaladinC++;

		}

	}


	output += MageC		> 0 ? std::to_string(MageCount) + " mages\n" : "No mages!\n";

	output += RangerC	> 0 ? std::to_string(RangerC) + " rangers\n" : "No rangers!\n";

	output += WarriorC	> 0 ? std::to_string(WarriorC) + " warriors\n" : "No warriors!\n";

	output += PaladinC	> 0 ? std::to_string(PaladinC) + " paladins\n" : "No paladins!\n";

	return output;

}

string Guild::AttackWithMages()

{

	string output;

	for (vector<shared_ptr<Adventurers>>::iterator it = _adventurers.begin(); it != _adventurers.end(); it++)
	{

		if (dynamic_pointer_cast<Mage>(*it))
		{

			output += (*it)->Attack();

		}

	}

	return output;

}



string Guild::AttackWithPaladins()

{

	string output;

	for (vector<shared_ptr<Adventurers>>::iterator it = _adventurers.begin(); it != _adventurers.end(); it++)
	{

		if (dynamic_pointer_cast<Paladin>(*it))
		{

			output += (*it)->Attack();

		}

	}

	return output;

}



string Guild::AttackWithRangers()

{

	string output;

	for (vector<shared_ptr<Adventurers>>::iterator it = _adventurers.begin(); it != _adventurers.end(); it++)
	{

		if (dynamic_pointer_cast<Ranger>(*it))
		{

			output += (*it)->Attack();

		}

	}

	return output;

}



string Guild::AttackWithWarriors()

{

	string output;

	for (vector<shared_ptr<Adventurers>>::iterator it = _adventurers.begin(); it != _adventurers.end(); it++)
	{

		if (dynamic_pointer_cast<Warrior>(*it))
		{

			output += (*it)->Attack();

		}

	}

	return output;

}




string Guild::AttackWithAllAdventurers()
{
	string output = "You command everyone to attack! \n";

	for (auto adventurer : _adventurers)
	{
		output += adventurer->Attack() + " \n";
	}

	return output;
}
