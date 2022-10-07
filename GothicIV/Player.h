#pragma once
#include "Weapon.h"
#include "Armour.h"
#include "LuckyItem.h"
#include <string>

using namespace std;

class Player
{
public:
	string getName();
	string getPlayerClass();
	int getHp();
	int getDmg();
	int getToughness();
	int getArmor();
	int getGold();
	int getWeapon();
	int getHat();
	int getChestplate();
	int getGloves();
	int getBoots();
	int getLuckyItem();

	void showStats();

protected:
	string name, playerClass;
	int hp, dmg, toughness, armor, gold, dexterity;		//dexterity wp³ywa szansa zdogowania ataku
	int weapon, hat, chestplate, gloves, boots, luckyItem[2];	//aktywne itemy na graczu. Podawaj tu id itemu.
	//int eq[50];	//ekwipunek
	
};

