#ifndef MOB_H
#define MOB_H

#include <string>
#include <iostream>
#include "Weapons.h"

using std::string;

class Weapons;

class Mob {
public:
	Mob(
		int hp, int lvl, string nm) :
		_health(hp), _level(lvl), _name(nm),
		_currentWeaon(0) {};

	void setAttributes(
		int health, int level, string name);

	void setWeapon(
		Weapons* weapon);

	void attack(
		Mob* target);

	string& getName();
	
private:
	Weapons * _currentWeaon;
	int _health, _level;
	string _name;
};

class Client : public Mob
{
public: 
	Client(
		int hp, int lvl, string nm)
		: Mob(hp, lvl, nm) {};

	void otherStuff() {};
};

#endif // !MOB_H
