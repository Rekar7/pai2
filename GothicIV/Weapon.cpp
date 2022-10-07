#include "Weapon.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

Weapon::Weapon()	//defaultowe staty broni przed wygenerowaniem
{
	name = "Maczuga Smierci";
	description = "Potezna maczuga zdolna nawet zabic.";
	type = "melee";
	id = -1;
	cost = 50;
	minDmg = 5;
	maxDmg = 10;
}

void Weapon::itemGenerator(int setId, string weaponType, string rarity)		//generacja stat�w broni
{
	id=setId;
	type=weaponType;
	quality=rarity;
	description="nie ma opisu";
	
	if(weaponType=="melee")
	{
		name=meleeNames[rand()%10];
	}
	else if(weaponType=="range")
	{
		name=rangeNames[rand()%10];
	}
	else if(weaponType=="magic")
	{
		name=magicNames[rand()%10];
	}
	
	if(rarity=="common")
	{
		minDmg=5+rand()%10;
		maxDmg=minDmg+5+rand()%6;
		cost=(minDmg*3)+(maxDmg*2)-(maxDmg-minDmg)+rand()%10;	//cena zale�na jest od obra�e�. Wi�ksze obra�enia - wi�ksza cena. 
																//Je�li bro� ma du�y przedzia� obra�e�, przez co ma wi�ksze prawdopodobie�stwo,
																//�e wylosuje mniejsze obra�enia zamiast tym wi�kszych, wtedy te� jest ta�sza, pomimo �e jej maks
																//dmg to np. 400, bo co z tego je�li jej min dmg to 1.
	}
	else if(rarity=="rare")
	{
		minDmg=20+rand()%15;
		maxDmg=minDmg+10+rand()%10;
		cost=(minDmg*3)+(maxDmg*2)-(maxDmg-minDmg)+rand()%40;
	}
	else if(rarity=="epic")
	{
		minDmg=45+rand()%30;
		maxDmg=minDmg+25+rand()%25;
		cost=(minDmg*3)+(maxDmg*2)-(maxDmg-minDmg)+rand()%100;
	}
	else if(rarity=="legendary")
	{
		minDmg=100+rand()%50;
		maxDmg=minDmg+65+rand()%40;
		cost=(minDmg*3)+(maxDmg*2)-(maxDmg-minDmg)+rand()%500;
	}
}

void Weapon::setName(string newName)
{
	name = newName;
}

void Weapon::showStats()		//pokazuje staty broni dla gracza
{
	cout <<"   Nazwa broni: " << name << endl;
	cout <<"   Opis:        " <<description << endl;
	cout <<"   Jakosc:      " << quality << endl;
	cout <<"   Typ broni:   " << type << endl;
	cout <<"   Cena:        " << cost << endl;
	cout <<"   Obrazenia:   " << minDmg << " - " << maxDmg << endl;
	cout <<"   Id:          " << id <<endl;
	cout<<endl;
}
