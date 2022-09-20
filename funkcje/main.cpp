#include <iostream>

using namespace std;

void szczepan()
{
	cout<<"nienawidze ucina!!!!!!!"<<endl;
}

void szczecin(int a, int b)
{
	if(a>b) cout<<"szczecin gór¹"<<endl;
	if(a=b) cout<<"Szczecin to idealny balans szczepana i ucina Szcze(pan)(U)cin."<<endl;
	if(a<b) cout<<"S³upsk wróg koszalina"<<endl;
}


int agencin()
{
	int mapa = 1;
	
	return mapa;
}

int ucin(int wkurzenie, int cierpliwosc, int msciwosc)
{
	int lata = (wkurzenie/3)+cierpliwosc*msciwosc;
	
	return lata;
}



int main(int argc, char** argv) {
	
	szczepan();
	
	szczecin(5,5);
	
	if(agencin()==1)
	{
		cout<<"ANCIENT HAS BEEN SELECTED"<<endl;
	}
	
	
	cout<<"Zniszcze cie szczepanie za "<<ucin(5,2,4)<<" lat na twe zawolanie!"<<endl;
	
	
	return 0;
}
