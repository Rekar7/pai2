#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void gotoxy( int x, int y )
{
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}

void ustaw_kolor(int c)
{
	HANDLE consoleHandler = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(consoleHandler, c);
}


int main(int argc, char** argv) {
	
	srand(time(0));
	
	int x[4],y[4];
	
	for(int i=0;i<4;i++)
	{
		x[i]=1+rand()%30,y[i]=1+rand()%20;
	}
	int kierunek;
	
	
	
	while(1)
	{	
		
		for(int i=0;i<4;i++)
		{
			switch(i)
			{
				case 0:
					ustaw_kolor(3);
				break;
				case 1:
					ustaw_kolor(5);
				break;
				case 2:
					ustaw_kolor(6);
				break;
				case 3:
					ustaw_kolor(8);
				break;
			}
			
			gotoxy(x[i],y[i]);
			cout<<static_cast<char>(219);
			
			kierunek=rand()%4;
		
		switch(kierunek)
		{
			case 0:
				y[i]+=1;
			break;
			
			case 1:
				x[i]+=1;
			break;
			
			case 2:
				y[i]-=1;
			break;
			
			case 3:
				x[i]-=1;
			break;	
		}
			
			
			if(y[i]<1)
			{
				y[i]=1;
			}
			if(y[i]>100)
			{
				y[i]=50;
			}
			if(x[i]<1)
			{
				x[i]=1;
			}
			if(x[i]>200)
			{
				x[i]=80;
			}
		
		}
		//Sleep(1);
		//system("cls");
		
	}
	
	return 0;
}
