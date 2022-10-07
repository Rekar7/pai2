#include "LuckyItem.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

LuckyItem::LuckyItem()
{
	name = "Zegarek kamienny";
	description = "Mozna nim kogos uderzyc";
	type = "dmg";
	id = -1;
	cost = 50;
	buff=5;
}

void LuckyItem::setName(string newName)		//do debuga mo¿e siê przyda
{
	name = newName;
}

void LuckyItem::itemGenerator(int setId, string buffType, string rarity)		//generacja statów pancerza
{
	id=setId;
	type=buffType;
	quality=rarity;
	description="nie ma opisu";
	
	if(buffType=="health")
	{
		name=healthNames[rand()%10];
	}
	else if(buffType=="dmg")
	{
		name=dmgNames[rand()%10];
	}
	else if(buffType=="dex")
	{
		name=dexNames[rand()%10];
	}
	
	if(rarity=="common")
	{
		buff=2+rand()%4;
		cost=40 + buff*25 + rand()%10;
	}
	else if(rarity=="rare")
	{
		buff=5+rand()%5;
		cost=200 + buff*25 + rand()%50;
	}
	else if(rarity=="epic")
	{
		buff=10+rand()%10;
		cost=500 + buff*25 + rand()%80;
	}
	else if(rarity=="legendary")
	{
		buff=20+rand()%15;
		cost=100 + buff*25 + rand()%160;
	}
}


void LuckyItem::showStats()		//pokazuje staty pancerza
{
	cout <<"   Nazwa pancerza: " << name << endl;
	cout <<"   Opis:           " <<description << endl;
	cout <<"   Jakosc:         " << quality << endl;
	cout <<"   Typ buffa:   " << type << endl;
	cout <<"   Cena:           " << cost << endl;
	cout <<"   Buff:        " << buff << endl;
	cout <<"   Id:             " << id <<endl;
	cout <<endl;
}
