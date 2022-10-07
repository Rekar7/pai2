#pragma once
#include "Item.h"
#include <string>

using namespace std;

class LuckyItem :
    public Item
{
public:
    LuckyItem();
    void setName(string newName);
    void showStats();
    void itemGenerator(int setId, string buffType, string rarity);
protected:
	int buff;	//procenty
	
	const string healthNames[10]={"Zab Wezosmoka","Ucinski zegarek","Amulet szczesliwosci","Kompas wskazujacy","Galazka bzu","Liscie Wierzby","Martwy chomik","zywy slimak","Malpka","Ucho goblina"};
  	const string dmgNames[10]={"Wkurzony gremlin","Martwa mucha","sztylet zapomnienia","Igla sosny","Kwadratowa pilka","Niebieski wieloryb","Jad pajaka jaskiniowego","Relikiwa Sw. Szczepana","Pamiatka rodzinna","Zloty pocisk"};
    const string dexNames[10]={"Ksiega cwiczen","Modliszka","Truchlo myszy","Gietki patyk","Szyszka swierku","Nasiona maku","Podrecznik siania maku","Skrzydla osy","Kopyta sarny","Zeby slonia"};
};

