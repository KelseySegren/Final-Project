#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>

using namespace std;

class Player
{
private:
	string _firstName;
	string _lastName;
	int _number;
	string _position;

public:
	// default Player
	Player();
	// allow the caller to set up the player.  
	Player(int number, string firstName, string lastName, string position);
	Player(Player* p);
	string getfirstName() const;  // return player's first name
	string getlastName() const; // return player's last name
	int getNumber() const;  // return player's jersey number
	string getPosition() const; //return player's position
};

#endif // PLAYER_H_
