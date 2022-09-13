#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) 
{
	
	system("Color 4");
		
	cout<<"*************************"<<endl;
	cout<<"*      Dni tygodnia     *"<<endl;
	cout<<"*   Wojciech Binczyk    *"<<endl;
	cout<<"*************************"<<endl;
	
	int weekDay;
	
	cout<<"Podaj numer dnia tygodnia: ";
	cin>>weekDay;
	
	switch(weekDay)
	{
		case 1:
		{
			cout<<"Poniedzialek";
		}
		break;
		
		case 2:
		{
			cout<<"Wtorek";
		}
		break;
		
		case 3:
		{
			cout<<"Sroda";
		}
		break;
		
		case 4:
		{
			cout<<"Czwartek";
		}
		break;
		
		case 5:
		{
			cout<<"Piatek";
		}
		break;
		
		case 6:
		{
			cout<<"Sobota";
		}
		break;
		
		case 7:
		{
			cout<<"Niedziela";
		}
		break;
		
		default:
		{
				cout<<"Error 2137";
		}
		break;
	}
	
	return 0;
}
