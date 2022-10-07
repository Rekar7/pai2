#pragma once
#include "Item.h"
#include <string>

using namespace std;

class Weapon :
    public Item
{
public:
    Weapon();
    void setName(string newName);
    void showStats();
    void itemGenerator(int setId, string weaponType, string rarity);
protected:
    int minDmg, maxDmg;
    
	const string meleeNames[10]={"Maczuga Smierci","Tepy miecz zniszczenia","Siekiera, motyka","bulawa otepienia","Zwykly berdysz","Niszczyciel dobrej zabawy - miecz","Potezna Halabarda","Kamienny kilof","Zadlugi miecz","Zbyt ostry topor"};
  	const string magicNames[10]={"Rozdzka wesolosci","Potezny kostur kamienia","Zmora stawonogow","Spray przeciw insektom","Rozdzka zwykla","Niszczyciel dobrej zabawy - rozdzka","Patyk kontroli umyslow","Patyczak","Czarna rozdzka","Biala rozdzka"};
    const string rangeNames[10]={"Swiety Bolter","Proca metalowa","Widmowy luk z widm","Niszczyciel dobrej zabawy - luk","Elficki luk","Czlowieczy luk","Krasnoludzka kusza","Miotacz beltow","Luk szturmowy","Miniluk"};
};

