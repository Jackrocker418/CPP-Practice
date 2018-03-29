#include "Weapons.h"
#include <iostream>
using std::cout;
using std::endl;

void Weapons::weaponAttack(
	Mob* attacker, Mob* target)
{
	cout << attacker->getName() << " hits " 
		<< target->getName() << endl;
};

void Mace::weaponAttack(
	Mob* attacker, Mob* target)
{
	cout << attacker->getName() << " smashes "
		<< target->getName() << endl;
};

void FireBreath::weaponAttack(
	Mob* attacker, Mob* target)
{
	cout << attacker->getName() << " burns "
		<< target->getName() << endl;
};

void Sword::weaponAttack(
	Mob* attacker, Mob* target)
{
	cout << attacker->getName() << " slashes "
		<< target->getName() << endl;
};

