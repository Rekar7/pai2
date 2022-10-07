#pragma once
#include "Item.h"
#include <string>

using namespace std;

class Armour :
    public Item
{
public:
	Armour();
	void setName(string newName);
	void showStats();
	void itemGenerator(int setId, string armorType, string rarity);
	
protected:
	int armor;
	
	const string hatNames[10]={"Obronca dobrej zabawa","Slomiany kapelusz z drutem","Czapka z drewna","Rogi demona","Maska antygazowa?","Helm z polimeru","Skorupa zolwia","Czapa z harrego pottra","Maska mistycznego i madrego drzewa","Czepek z foli aluminiowej"};
  	const string chestplateNames[10]={"Obronca dobrej zabawa","Kolczuga z ognia","Plot armor","Brygandyna z kosci sloniowej","Skorzana kurtk","Drewniany napiersnik","Gruba przeszywanica","Zardzewiala kolczuga","Mundur komisarza","Pancerz domowej roboty"};
    const string glovesNames[10]={"Obronca dobrej zabawa","Rekawice samozniszczenia","Krolicze lapy","Glowa krokodyla","Rekawica z polimeru","Kolcza rekawica","kastet","Zestaw pierscieni wladzy","Kabel RJ45","Papierowa torba"};
};

