#include "Mob.h"
using std::cout;
using std::endl;

void Mob::setAttributes(
	int health, int level, string name) 
{
	this->_health = health;
	this->_level = level;
	this->_name = name;
}

void Mob::setWeapon(
	Weapons* weapon)
{
	this->_currentWeaon = weapon;
};

string& Mob::getName()
{
	return this->_name;
}

void Mob::attack(
	Mob* target) 
{
	this->_currentWeaon->weaponAttack(this, target);
};