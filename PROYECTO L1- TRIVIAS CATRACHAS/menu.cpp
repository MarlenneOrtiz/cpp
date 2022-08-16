#include <iostream>
#include <cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include "funciones.h"

using namespace std; 



void menu(){
 int opcion=0;
 setlocale(LC_ALL,"");

  while (true)
  {
   system("COLOR F1");
   system("cls");
    cuadro (5, 6, 115, 35);
    
    gotoxy (50,11); cout<<"*********"<<endl;
  	gotoxy (50,12); cout<<" M E N U "<<endl;
  	gotoxy (50,13); cout<<"*********";

   cout<< endl;
   cout<< endl;
   cout<< endl;

   	gotoxy (48,16);cout<<"1- Historia" << endl;
  	gotoxy (48,17);cout<<"2- Deporte " << endl;
  	gotoxy (48,18); cout<<"3- Geografia" << endl;
   	gotoxy (48,19);cout<<"0- Salir" << endl;
    cout<< endl;
   
   	gotoxy (48,21);cout<<"Ingrese una opcion : ";
   cin>> opcion; 

   if (opcion==0)
   {
     break;
   }
   
   else{
    preguntas ( opcion );
   }
   
   }

  
}



