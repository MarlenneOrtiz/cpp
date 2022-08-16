#include <iostream>
#include <cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include "funciones.h"

using namespace std;



bool login() {
	string contrasena=" ";
	string Nombre=" "; 
	int intentos=0;
	
    setlocale(LC_ALL,"");
	
	
	while (intentos <= 3)
	{
		system("cls");
			
       cuadro (5, 6, 115, 35);
		
	
		
		if (intentos ==3){
			
			system("COLOR 04");
				
			gotoxy (40,20); cout<<" ERROR en la contraseña, intente de nuevo";
			cout<<endl;
			
			getch();
		  return false;
			
		}
		
		
			
		 gotoxy (20,9);cout<<"                           T R I V I A S      C A T R A C H A S             "<<endl;
		 cout<<"                            =================================================================   "<<endl;
	     cout<<endl;
	     cout<<endl;
	     cout<<endl;
	     cout<<endl;
			
	     gotoxy (44,15); cout<<"Ingrese su nombre ";
	     cin>> Nombre;
	     
	     cout<<endl;
	     cout<<endl;
		
		gotoxy (44,19); cout<<"Ingrese la contraseña para jugar "; 
	 	 cin>> contrasena; 
	 	 
	 	 if (contrasena=="1234"){
	 	 	
	 	 	system("cls");
	 	 	
	 	 	cuadro (5, 6, 115, 35);
	 	 	
	 	   
	 	   
	 	      HANDLE  hConsole;
            	int k;
	
            hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

              
             for(k = 1; k < 600; k++)
                {
                     
                   SetConsoleTextAttribute(hConsole, k);
                   gotoxy (40,20); cout<<"BIENVENIDO " << Nombre <<" A TRIVIAS CATRACHAS !!" ; 
                }
  
             cin.get(); 
	 	 
	 	 
	 	 	 cout<<endl;
	 	 	 cout<<endl;
	 	 	 
	 	 	  getch();
	 	 	 
	 	 	   menu ();
	 	 	
	 	 	return true;
	 	 	
	 	 }
		
		intentos++;
		
	}
		
}







