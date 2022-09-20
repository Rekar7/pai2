#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int checker(bool check)
{
	int x=0;
	
	if(check == true)
	{
		x=1;
	}
	
	return x;
}

void wyswietl(int resztki, int wszystkie)
{
	cout<<"Jest "<<resztki<<" reszek i "<<wszystkie-resztki<<" orlow."<<endl;
}

int main(int argc, char** argv) {
	
	srand(time(0));
	
	bool moneta[1000];	//false - orzel, true - reszka
	int reszki=0;
	
	for(int i=0;i<1000;i++)
	{
		moneta[i]=rand()%2;
		reszki+=checker(moneta[i]);
	}
	
	wyswietl(reszki,1000);
	
	return 0;
}
