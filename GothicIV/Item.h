#pragma once
#include <string>

using namespace std;

class Item
{
public:
	string getName();
	string getDescription();
	string getType();
	int getId();
	int getCost();
protected:
	string name, description, type, quality;
	int id, cost;
};

