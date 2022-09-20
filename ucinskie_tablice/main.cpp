#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	cout<<"******************\n";
	cout<<"    szczepany     \n";	
	cout<<"******************\n";
	
	srand(time(0));
	
	int rozmiar=10;
	
	int* tab_dyn= new int[rozmiar]; // dynamiczna
		
	for(int i=0;i<rozmiar;i++)
	{
		if(i<rozmiar/2)
		{
			tab_dyn[i]=(1+rand()%10)*2;
		}
		else
		{
			tab_dyn[i]=(1+rand()%10)*2+1;
		}
		cout<<tab_dyn[i]<<endl;
	}
	
	delete[] tab_dyn; //usuwa tablice
	
	
	
	return 0; 
}
