#include "Armour.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

Armour::Armour()	//defaultowe staty broni przed wygenerowaniem
{
	name = "Napiersnik zniszczenia";
	description = "Wlasciwie to bardziej chroni niz niszczy.";
	type = "chestplate";
	id = -1;
	cost = 50;
	armor = 5;
}

void Armour::setName(string newName)		//do debuga mo¿e siê przyda
{
	name = newName;
}

void Armour::itemGenerator(int setId, string armorType, string rarity)		//generacja statów pancerza
{
	id=setId;
	type=armorType;
	quality=rarity;
	description="nie ma opisu";
	
	if(armorType=="hat")
	{
		name=hatNames[rand()%10];
	}
	else if(armorType=="chestplate")
	{
		name=chestplateNames[rand()%10];
	}
	else if(armorType=="gloves")
	{
		name=glovesNames[rand()%10];
	}
	
	if(rarity=="common")
	{
		armor=2+rand()%4;
		cost=30 + armor*20 + rand()%10;
	}
	else if(rarity=="rare")
	{
		armor=5+rand()%8;
		cost=200 + armor*20 + rand()%25;
	}
	else if(rarity=="epic")
	{
		armor=12+rand()%14;
		cost=400 + armor*20 + rand()%60;
	}
	else if(rarity=="legendary")
	{
		armor=24+rand()%26;
		cost=600 + armor*20 + rand()%120;
	}
}


void Armour::showStats()		//pokazuje staty pancerza
{
	cout <<"   Nazwa pancerza: " << name << endl;
	cout <<"   Opis:           " <<description << endl;
	cout <<"   Jakosc:         " << quality << endl;
	cout <<"   Typ pancerza:   " << type << endl;
	cout <<"   Cena:           " << cost << endl;
	cout <<"   Pancerz:        " << armor << endl;
	cout <<"   Id:             " << id <<endl;
	cout <<endl;
}
