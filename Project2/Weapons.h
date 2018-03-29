#ifndef WEAPONS_H
#define WEAPONS_H

#include "Mob.h"
#include <string>
using std::string;

class Mob;

class Weapons
{
public:
	virtual void weaponAttack(
		Mob* attcker, Mob* target);
};

class Mace : public Weapons
{
	virtual void weaponAttack(
		Mob* attcker, Mob* target);
};

class FireBreath : public Weapons
{
	virtual void weaponAttack(
		Mob* attcker, Mob* target);
};

class Sword : public Weapons
{
	virtual void weaponAttack(
		Mob* attcker, Mob* target);
};

#endif // !WEAPONS_H


