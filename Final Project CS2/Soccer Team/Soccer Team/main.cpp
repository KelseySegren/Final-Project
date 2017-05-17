#include <string>
#include <iostream>
#include "Player.h"
#include "Team.h"

using namespace std;

int main()
{
	//create a new team with 11 players 
	Team* newTeam = new Team("Dream Team");

	if (newTeam->size() == 0) {
		Player* player1 = new Player(13, "Lindsey", "Moon", "Forward");
		newTeam->addPlayer(player1);
		delete player1;

		Player* player2 = new Player(7, "Kelsey", "Segren", "Defender");
		newTeam->addPlayer(player2);
		delete player2;

		Player* player3 = new Player(2, "Clint", "Dempsey", "Forward");
		newTeam->addPlayer(player3);
		delete player3;

		Player* player4 = new Player(3, "Brad", "Evans", "Defender/Midfielder");
		newTeam->addPlayer(player4);
		delete player4;

		Player* player5 = new Player(24, "Stefan", "Frei", "Goalkeeper");
		newTeam->addPlayer(player5);
		delete player5;

		Player* player6 = new Player(10, "Nicolas", "Lodeiro", "Midfielder");
		newTeam->addPlayer(player6);
		delete player6;

		Player* player7 = new Player(5,"Nouhou", "Tolo", "Defender");
		newTeam->addPlayer(player7);
		delete player7;

		Player* player8 = new Player(29, "Roman", "Torres", "Defender");
		newTeam->addPlayer(player8);
		delete player8;

		Player* player9 = new Player(23,"Henry", "Wingo", "Midfielder");
		newTeam->addPlayer(player9);
		delete player9;

		Player* player10 = new Player(9, "David", "Ross", "Catcher");
		newTeam->addPlayer(player10);
		delete player10;

		Player* player11 = new Player(19, "Conor", "Dwyer", "Swimmer");
		newTeam->addPlayer(player11);
		delete player11;
	}

	else {
		// change the name of a player
		Player* p = newTeam->getPlayerByName("Lindsey");
	}
	delete newTeam;
}