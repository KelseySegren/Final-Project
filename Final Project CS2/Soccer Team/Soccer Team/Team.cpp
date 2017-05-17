#include<string>
#include <vector>
#include <fstream>
#include "Player.h"
#include "Team.h"


using namespace std;

Team::Team(string name)
{
	_name = name;
	fstream infile(_name, ios::in);
	if (infile.is_open())
	{
		string firstName, lastName, position;
		int number;
		while (infile >> number >> firstName >> lastName >> position)
		{
			Player* p = new Player(number, firstName, lastName, position);
			playerList.push_back(p);
		}
	}
}

Team::~Team()
{
	fstream outfile(_name, ios::out);
	if (outfile.is_open())
	{
		for (int i = 0; i < playerList.size(); i++)
		{
			outfile << playerList[i]->getNumber() << " "  
				<< playerList[i]->getfirstName() << " "
				<< playerList[i]->getlastName() << " "
				<< playerList[i]->getPosition() << endl;

			delete playerList[i];
		}
	}
	else
	{
		for (int i = 0; i < playerList.size(); i++)
		{
			delete playerList[i];
		}
	}
}

string Team::getName() const
{
	return _name;
}

Player* Team::getPlayerAtIndex(int index)
{
	if (index >= 0 && index < playerList.size())
	{
		return playerList[index];
	}
	return NULL;
}

void Team::addPlayer(Player* player)
{
	Player* p = new Player(player);
	playerList.push_back(p);
}

int Team::size()
{
	return playerList.size();
}

Player* Team::getPlayerByName(string name)
{
	for (int i = 0; i < playerList.size(); i++)
	{
		if (playerList[i]->getfirstName() == name)
		{
			return playerList[i];
		}
	}
	return NULL;
}