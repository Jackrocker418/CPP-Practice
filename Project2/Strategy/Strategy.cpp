#include "Strategy.h"

void StrategyExample::startExample()
{
	Mob orc(20,5,"Lorp the orc");
	Mace mace;
	orc.setWeapon(&mace);
	Mob dragon(2000, 40, "Prince fuzzlepuss");
	FireBreath firebreath;
	dragon.setWeapon(&firebreath);
	Client player(450, 10, "Slerth");
	Sword sword;
	player.setWeapon(&sword);
	orc.attack(&player);
	dragon.attack(&player);
	player.attack(&dragon);
};
