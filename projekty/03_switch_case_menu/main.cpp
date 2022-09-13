#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	cout<<"***********************"<<endl;
	cout<<"*   Switch case menu  *"<<endl;
	cout<<"*  Wojciech Binczyk   *"<<endl;
	cout<<"***********************"<<endl;
	
	int menu;
	
	int a,b;
	
	cout<<"1. Dodawanie\n";
	cout<<"2. Odejmowanie\n";
	cout<<"3. Mnozenie\n";
	cout<<"4. Dzielenie\n";
	cout<<"Jaka operacje chcesz przeprowadzic: ";
	cin>>menu;
	cout<<"Podaj liczbe: ";
	cin>>a;
	cout<<"Podaj liczbe: ";
	cin>>b;
	
	switch(menu)
	{
	
		case 1:
		{
			cout<<"To jest "<<a+b;
		}
		break;
		
		case 2:
		{
			cout<<"To jest "<<a-b;
		}
		break;
		
		case 3:
		{
			cout<<"To jest "<<a*b;
		}
		break;
		
		case 4:
		{
			cout<<"To jest "<<a/b;
		}
		break;
	
	}
	
	
	return 0;
}
