#include <string>
#include "Player.h"

using namespace std;

Player::Player()
{
	_firstName = " ";
	_lastName = " ";
	_number = 0;
	_position = " ";
}

Player::Player(int number, string firstName, string lastName, string position)
{
	_firstName = firstName;
	_lastName = lastName;
	_number = number;
	_position = position;
}

Player::Player(Player* p)
{
	if (p != NULL)
	{
		_firstName = p->getfirstName();
		_lastName = p->getlastName();
		_number = p->getNumber();
		_position = p->getPosition();
	}
}

string Player::getfirstName() const
{
	return _firstName;
}

string Player::getlastName() const
{
	return _lastName;
}

int Player::getNumber() const
{
	return _number;
}

string Player::getPosition() const
{
	return _position;
}