#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "PlayerBarbarian.h"
#include "Weapon.h"
#include "Armour.h"
#include "LuckyItem.h"

using namespace std;

int choiceMaker(int choiceAmount)	//funkcja odpowiedzialna za wybory gracza
{
	int choiceInt=-1;
	int choice=-1;	//-1 oznacza nieprawid³owy wybór
	bool loop=true;

	while (loop == true)
	{
		bool correctString = true;
		string choiceString;
		cout << "Wpisz: ";
		cin >> choiceString;

		for (int i = 0;i < choiceString.size();i++)	//pêtla odpowiadaj¹ca za sprawdzanie, czy wszystkie znaki w stringu to cyfry.
		{
			if (isdigit(choiceString[i]) == false)
			{
				correctString = false;
			}
		}

		if (correctString == true)
		{
			//fragment odpowiadaj¹cy za sprawdzenie, czy wpisano prawid³ow¹ liczbê.
			choiceInt = stoi(choiceString);
			if ((choiceInt <= choiceAmount) && (choiceInt > 0))
			{
				choice = choiceInt;
				loop = false;
			}
			else
			{
				cout << "Cos poszlo nie tak... Upewnij sie, ze postapiles zgodnie z instrukcjami i sprobuj ponownie.\n";
			}
		}
		else
		{
			cout << "Cos poszlo nie tak... Upewnij sie, ze postapiles zgodnie z instrukcjami i sprobuj ponownie.\n";
		}

	}
	return choice;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//						        					INT MAIN                                                          //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{ 

	srand(time(0));
	
	Weapon weapon;	//obiekt do push_backowania do vectora
	vector<Weapon> weapons; 
	
	Armour armour;	//obiekt do push_backowania do vectora
	vector<Armour> armours;
	
	LuckyItem luckyItem;	//obiekt do push_backowania do vectora
	vector<LuckyItem> luckyItems;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//						        			ITEM GENERATION                                                          //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	///////////////////////////////////////   WEAPONS   ///////////////////////////////////////////////////////////////
	
	int id=0;

	for(int i=0;i<20;i++)
	{
		if(i<7)
		{
			weapon.itemGenerator(id,"melee","common");
			weapons.push_back(weapon);
		}
		else if((i<14)&&(i>=7))
		{
			weapon.itemGenerator(id,"melee","rare");
			weapons.push_back(weapon);
		}
		else if((i<18)&&(i>=14))
		{	
			weapon.itemGenerator(id,"melee","epic");
			weapons.push_back(weapon);
		}
		else if((i<20)&&(i>=18))
		{
			weapon.itemGenerator(id,"melee","legendary");
			weapons.push_back(weapon);
		}
		
		id++;
	}

	for(int i=20;i<40;i++)
	{
		if(i<27)
		{
			weapon.itemGenerator(id,"range","common");
			weapons.push_back(weapon);
		}
		else if((i<34)&&(i>=27))
		{
			weapon.itemGenerator(id,"range","rare");
			weapons.push_back(weapon);
		}
		else if((i<38)&&(i>=34))
		{	
			weapon.itemGenerator(id,"range","epic");
			weapons.push_back(weapon);
		}
		else if((i<40)&&(i>=38))
		{
			weapon.itemGenerator(id,"range","legendary");
			weapons.push_back(weapon);
		}
		
		id++;
	}
	
	for(int i=40;i<60;i++)
	{
		if(i<47)
		{
			weapon.itemGenerator(id,"magic","common");
			weapons.push_back(weapon);
		}
		else if((i<54)&&(i>=47))
		{
			weapon.itemGenerator(id,"magic","rare");
			weapons.push_back(weapon);
		}
		else if((i<58)&&(i>=54))
		{	
			weapon.itemGenerator(id,"magic","epic");
			weapons.push_back(weapon);
		}
		else if((i<60)&&(i>=58))
		{
			weapon.itemGenerator(id,"magic","legendary");
			weapons.push_back(weapon);
		}
		
		id++;
	}


	///////////////////////////////////////   ARMOURS   ///////////////////////////////////////////////////////////////
	

	id=0;

	for(int i=0;i<20;i++)
	{
		if(i<7)
		{
			armour.itemGenerator(id,"hat","common");
			armours.push_back(armour);
		}
		else if((i<14)&&(i>=7))
		{
			armour.itemGenerator(id,"hat","rare");
			armours.push_back(armour);
		}
		else if((i<18)&&(i>=14))
		{	
			armour.itemGenerator(id,"hat","epic");
			armours.push_back(armour);
		}
		else if((i<20)&&(i>=18))
		{
			armour.itemGenerator(id,"hat","legendary");
			armours.push_back(armour);
		}
		
		id++;
	}

	for(int i=20;i<40;i++)
	{
		if(i<27)
		{
			armour.itemGenerator(id,"chestplate","common");
			armours.push_back(armour);
		}
		else if((i<34)&&(i>=27))
		{
			armour.itemGenerator(id,"chestplate","rare");
			armours.push_back(armour);
		}
		else if((i<38)&&(i>=34))
		{	
			armour.itemGenerator(id,"chestplate","epic");
			armours.push_back(armour);
		}
		else if((i<40)&&(i>=38))
		{
			armour.itemGenerator(id,"chestplate","legendary");
			armours.push_back(armour);
		}
		
		id++;
	}
	
	for(int i=40;i<60;i++)
	{
		if(i<47)
		{
			armour.itemGenerator(id,"gloves","common");
			armours.push_back(armour);
		}
		else if((i<54)&&(i>=47))
		{
			armour.itemGenerator(id,"gloves","rare");
			armours.push_back(armour);
		}
		else if((i<58)&&(i>=54))
		{	
			armour.itemGenerator(id,"gloves","epic");
			armours.push_back(armour);
		}
		else if((i<60)&&(i>=58))
		{
			armour.itemGenerator(id,"gloves","legendary");
			armours.push_back(armour);
		}
		
		id++;
	}
	
	
	///////////////////////////////////////   LUCKYITEMS   ///////////////////////////////////////////////////////////////
	

	id=0;

	for(int i=0;i<20;i++)
	{
		if(i<7)
		{
			luckyItem.itemGenerator(id,"hat","common");
			luckyItems.push_back(luckyItem);
		}
		else if((i<14)&&(i>=7))
		{
			luckyItem.itemGenerator(id,"hat","rare");
			luckyItems.push_back(luckyItem);
		}
		else if((i<18)&&(i>=14))
		{	
			luckyItem.itemGenerator(id,"hat","epic");
			luckyItems.push_back(luckyItem);
		}
		else if((i<20)&&(i>=18))
		{
			luckyItem.itemGenerator(id,"hat","legendary");
			luckyItems.push_back(luckyItem);
		}
		
		id++;
	}

	for(int i=20;i<40;i++)
	{
		if(i<27)
		{
			luckyItem.itemGenerator(id,"chestplate","common");
			luckyItems.push_back(luckyItem);
		}
		else if((i<34)&&(i>=27))
		{
			luckyItem.itemGenerator(id,"chestplate","rare");
			luckyItems.push_back(luckyItem);
		}
		else if((i<38)&&(i>=34))
		{	
			luckyItem.itemGenerator(id,"chestplate","epic");
			luckyItems.push_back(luckyItem);
		}
		else if((i<40)&&(i>=38))
		{
			luckyItem.itemGenerator(id,"chestplate","legendary");
			luckyItems.push_back(luckyItem);
		}
		
		id++;
	}
	
	for(int i=40;i<60;i++)
	{
		if(i<47)
		{
			luckyItem.itemGenerator(id,"gloves","common");
			luckyItems.push_back(luckyItem);
		}
		else if((i<54)&&(i>=47))
		{
			luckyItem.itemGenerator(id,"gloves","rare");
			luckyItems.push_back(luckyItem);
		}
		else if((i<58)&&(i>=54))
		{	
			luckyItem.itemGenerator(id,"gloves","epic");
			luckyItems.push_back(luckyItem);
		}
		else if((i<60)&&(i>=58))
		{
			luckyItem.itemGenerator(id,"gloves","legendary");
			luckyItems.push_back(luckyItem);
		}
		
		id++;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//						        		       	GAME START                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	for(int i=0;i<weapons.size();i++)
	{
		if(i == 0) cout<< "\nBRONIE MELLE\n";
		if(i == 20) cout<< "\nBRONIE RANGE\n";
		if(i == 40) cout<< "\nBRONIE MAGICZNE\n";
		weapons[i].showStats();
	}
	
	for(int i=0;i<armours.size();i++)
	{
		if(i == 00) cout<< "\nPANCERZE HAT\n";
		if(i == 20) cout<< "\nPANCERZE CHESTPLATE\n";
		if(i == 40) cout<< "\nPANCERZE GLOVES\n";
		armours[i].showStats();
	}

	PlayerBarbarian Player;
	int choice = -1;

	system("color 2");

	cout << "Gothic IV\n\nWpisz '1', by zaczac nowa gre lub '2', by wczytac zapis!\n";
	choice = choiceMaker(2);	//dwa to liczba mo¿liwych wyborów
	
	switch (choice)
	{

	case 1:
		cout << "Nowa gra!\n";
		Player.showStats();
		//weapon.showStats();
		
		
		
		break;

	case 2:
		cout << "Wczytaj gre!";
		break;

	default:
		break;
	}
	
	
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//											MAIN GAMEPLAY LOOP                                                        //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




}





/*

Po nowej grze gracz wybiera klasê, wtedy uruchamiana jest funkcju tworz¹ca postaæ z danej klasy.

*/
