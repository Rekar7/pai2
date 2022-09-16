#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	srand(time(0));
	
	cout<<"Lotto"<<endl;
	
	int losulosu=0;
	int min=1;
	int max=49;
	int licznik=0;
	
	while(licznik<6)
	{
		losulosu=min+rand()%(max-min+1);
		cout<<licznik+1<<". Wylosowano: "<<losulosu<<endl;
		licznik++;
	}
	
	return 0;
}
