#ifndef TEAM_H_
#define TEAM_H_
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

class Team
{
private:
	string _name;
	vector<Player*> playerList;

public:
	Team(string name);
	~Team();
	string getName() const;
	Player* getPlayerAtIndex(int index);
	void addPlayer(Player* player);
	int size();
	Player* getPlayerByName(string);

};

#endif // TEAM_H_
