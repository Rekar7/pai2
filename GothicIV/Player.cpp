#include "Player.h"
#include "Weapon.h"
#include "Armour.h"
#include "LuckyItem.h"
#include <string>
#include <iostream>

using namespace std;

void Player::showStats()
{
	cout << name << endl;
	cout << playerClass << endl;
	cout << hp << endl;
	cout << dmg << endl;
	cout << toughness << endl;
	cout << armor << endl;
	cout << gold << endl;
	cout << weapon << endl;
	cout << hat << endl;
	cout << chestplate << endl;
	cout << gloves << endl;
	cout << boots << endl;
	cout << luckyItem[0] << endl;
	cout << luckyItem[1] << endl;
}
