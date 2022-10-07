#include "PlayerBarbarian.h"
#include "Weapon.h"
#include "Armour.h"
#include "LuckyItem.h"
#include <string>
#include <iostream>

using namespace std;

PlayerBarbarian::PlayerBarbarian()
{
	name = "Ucin szczepanski";
	playerClass = "ucin";
	hp = 50;
	dmg = 10;
	toughness = 5;
	armor = 10;
	gold = 100;
	weapon = 1;
	hat = 1;
	chestplate = 1;
	luckyItem[0] = 0;	//zero, czyli brak itemu
	luckyItem[1] = 0;

}
