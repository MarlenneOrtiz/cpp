#include <iostream>
#include <cstdlib>
#include<stdlib.h>
#include <locale.h>
#include<windows.h>


using namespace std; 

void gotoxy (int x, int y){
	
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
	
}


void cuadro (int x1, int y1, int x2, int y2)
{
int i;
for (i = x1; i < x2; i++)
{
gotoxy (i, y1); cout<<"*"; 
gotoxy (i, y2); cout<<"*"; 
}
for (i = y1; i < y2; i++)
{
gotoxy (x1, i); cout<<"*"; 
gotoxy (x2, i); cout<<"*"; 
}
gotoxy (x1, y1); cout<<"*"; 
gotoxy (x1, y2); cout<<"*";
gotoxy (x2, y2); cout<<"*";
gotoxy (x2, y2); cout<<"*";

}

