#include <iostream>
#include <cstdlib>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <locale.h>
#include "funciones.h"
using namespace std; 



void preguntas ( int opcion ) 
{
	int correctas=0;
	int incorrectas =0;
	int respuesta=0;
    float porcentaje;
    
    setlocale(LC_ALL,"");
    
    system("COLOR B0");
	
	
	switch(opcion) 
{
    case 1: 
    {
    	
      system("cls");
     gotoxy (50,0); cout<<"-----------------"<<endl;
     gotoxy (50,1); cout<<" H I S T O R I A" << endl;
     gotoxy (50,2); cout<<"-----------------"<<endl;
     
     cout<< endl;
     cout<< endl;
     cout<< endl;
      
      cout<<"1- ¿Qué día se celebra la independencia de Honduras?" << endl;
      cout<<endl;
      cout<<"1) 1 de Sepetiembre" << endl;
      cout<<"2) 15 de Agosto " << endl;
      cout<<"3) 15 de Septiembre " << endl;
      cout<<"4) 24 de Diciembre " << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
       correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04"); cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      cout<<"2- ¿Dónde se cantó por primera vez nuestro Himno Nacional?" << endl;
      cout<<endl;
      cout<<"1) Tela,<Instituto San Antonio> 15 de Septiembre 1904 " << endl;
      cout<<"2) San Pedro Sula,<INTAE> 15 de Septiembre 1904  " << endl;
      cout<<"3) Tela ,<Escuela Policarpo Bonilla> 15 de Septiembre 1904 " << endl;
      cout<<"4) Tegucigalpa ,<Escuela Guadalupe Reyes> 15 de Septiembre 1904 " << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
         system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      cout<<"3- ¿Cuál de las siguientes opciones forma parte de nuestros símbolos mayores?" << endl;
      cout<<endl;
      cout<<"1) Bandera " << endl;
      cout<<"2) Pino " << endl;
      cout<<"3) Francisco Morazan " << endl;
      cout<<"4) José Trinidad Cabañas" << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
         system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      cout<<"4- Como incia la quinta estrofa de nuestro Himno Nacional ?" << endl;
      cout<<endl;
      cout<<"1) India virgen y hermosa dormias " << endl;
      cout<<"2) Era Francia, la libre, la heroica " << endl;
      cout<<"3) Tu tambien Oh mi patria! te alzaste " << endl;
      cout<<"4) Tu bandera es un lampo de cielo" << endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
         system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      cout<<"5- ¿Quién fue el primer presidente de Honduras?" << endl;
      cout<<endl;
      cout<<"1) Jose Cecilio del Valle  " << endl;
      cout<<"2) Jose Manuel Zelaya " << endl;
      cout<<"3) Carlos Roberto Reina  " << endl;
      cout<<"4) Dionisio de Herrera" << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
         system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      	 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      system("cls");
      
    
      cout<<"6- ¿Qué país colonizo a Honduras?" << endl;
      cout<<endl;
      cout<<"1) Francia " << endl;
      cout<<"2) España " << endl;
      cout<<"3) Portugal  " << endl;
      cout<<"4) Inglaterra" << endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
         system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      
      cout<<"7- De los cuatro personajes que se le enuncian. A este se le consideró “el alma cultural de los Capitalinos”." << endl;
      cout<<endl;
      cout<<"1) El Padre Francisco Márquez " << endl;
      cout<<"2) Juan Nepomuceno Fernández Lindo y Zelaya" << endl;
      cout<<"3) José Trinidad Reyes " << endl;
      cout<<"4) José Trinidad Cabañas" << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ;
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      cout<<"8- ¿Cuál de estos países NO formo parte de la Federación Centroamericana?" << endl;
      cout<<endl;
      cout<<"1) Honduras" << endl;
      cout<<"2) El Salvador" << endl;
      cout<<"3) Costa Rica " << endl;
      cout<<"4) Pánama" << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ;
      }
      
      else {
      	system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      
      cout<<"9- ¿Qué beneficios trajo la Huelga de 1954?" << endl;
      cout<<endl;
      cout<<"1) Aprobacion del código de trabajo" << endl;
      cout<<"2) Inicio la Reforma Agraria " << endl;
      cout<<"3) Creación del Ministerio de Trabajo " << endl;
      cout<<"4) TODAS LAS ANTERIORES SON CORRECTAS" << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ;
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      
      cout<<"10- ¿Cuándo ocurrió el golpe de estado que derroco al presidente Manuel Zelaya? " << endl;
      cout<<endl;
      cout<<"1) 28 de junio del 2009" << endl;
      cout<<"2) 15 de septiembre del 2009" << endl;
      cout<<"3) 28 de julio del 2009 " << endl;
      cout<<"4) 1 de mayo del 2009" << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ;
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
         
      
      
      porcentaje = (correctas*100)/10 ;
				system("cls");
				cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				 cout<<"                            =================================================================   "<<endl;
				 cout << "                                                 R E S U L T A D O S                " << endl;
				 cout<<"                            =================================================================   "<<endl;
				cout<< endl;
			  	cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS CORRECTAS : "  << correctas << endl;
				cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS INCORRECTAS: " <<incorrectas << endl;	
				cout<<endl;
                cout<<endl;
				cout << "                                             TU PORCENTAJE ES :  "     << porcentaje << "% " << endl;
				
				cout<<endl;
                cout<<endl;
                system("pause");
      
      
      
      
      
      
     break;
    }
    
   
    case 2: {
    	system("cls");
    	gotoxy (50,0); cout<<"---------------"<<endl;
        gotoxy (50,1); cout<<" D E P O R T E" << endl;
        gotoxy (50,2); cout<<"---------------"<<endl;
        
        
     
      cout<<"1- Nombre de la ajedrecista Sampedrana que obtuvo el primer título internacional para Honduras en las 44 Olimpiadas Mundiales de Ajedrez." << endl;
      cout<<endl;
      cout<<"1) Melissa Borjas " << endl;
      cout<<"2) Nathly Perez " << endl;
      cout<<"3) Valeria Viana  " << endl;
      cout<<"4) Karen Vilorio  "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
     
    
     
     
     
     
      cout<<"2- ¿Quién es el jugador hondureño que jugo en los 4 equipos denominados grandes?" << endl;
      cout<<endl;
      cout<<"1) Carlos Pavon " << endl;
      cout<<"2) Amado Guevara" << endl;
      cout<<"3) Ramon Nuñez " << endl;
      cout<<"4) Jhonny Leveron " << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      cout<<"3- ¿Primer boxeador hondureño en obtener un título mundial del boxeo?" << endl;
      cout<<endl;
      cout<<"1) Geovanny Baca " << endl;
      cout<<"2) Miguel Gonzalez" << endl;
      cout<<"3) Teófimo López " << endl;
      cout<<"4) NINIGUNA ES CORRECTA " << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      cout<<"4- ¿Quién fue el jugador que anoto el tiro libre a México en las eliminatorias para Sudáfrica 2010?" << endl;
      cout<<endl;
      cout<<"1) Donis Escober " << endl;
      cout<<"2) Maynor Figueroa" << endl;
      cout<<"3) Muma Bernardez " << endl;
      cout<<"4) Julio Cesar <<Rambo>> de Leon "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
       
      cout<<"5- ¿Quién es el jugador hondureño que ganó la Champions League?" << endl;
      cout<<endl;
      cout<<"1) Albert Elis " << endl;
      cout<<"2) David Suazo" << endl;
      cout<<"3) Carlos Costly " << endl;
      cout<<"4) Julio Cesar <<Rambo>> de Leon "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      system("cls");
      
      
      
      cout<<"6- ¿Nombre del beisbolista hondureño que actualmente juega en los Astros de Houston?" << endl;
      cout<<endl;
      cout<<"1) Mauricio Dubón " << endl;
      cout<<"2) Teófimo López" << endl;
      cout<<"3) Chelato Uclés " << endl;
      cout<<"4) Hector Castellanos "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      cout<<"7- ¿Cuál es el nombre de la nadadora hondureña que participo en TOKIO 2020?" << endl;
      cout<<endl;
      cout<<"1) Ana Joselina Fortin Pineda  " << endl;
      cout<<"2) Julimar Ávila" << endl;
      cout<<"3) Keyla Paola Ávila Ramírez" << endl;
      cout<<"4) Claudia Fortin "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
           
      
	    
      cout<<"8- ¿Cuántos mundiales ha clasificado la selección de futbol hondureña?" << endl;
      cout<<endl;
      cout<<"1) 5 " << endl;
      cout<<"2) 2" << endl;
      cout<<"3) 3 " << endl;
      cout<<"4) 7 "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
       
      
         
      cout<<"9- ¿Cuál medalla gano la selección de Honduras de voleibol Sub-23 femenina en el Campeonato Centroamericano de Voleibol-2022?" << endl;
      cout<<endl;
      cout<<"1) Medalla de Oro " << endl;
      cout<<"2) Medalla de Bronce " << endl;
      cout<<"3) Medalla de cobre  " << endl;
      cout<<"4) Medalla de Plata  "  << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1;
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
       
      cout<<"10- ¿Cuál es el equipo que más títulos ha ganado de Honduras?" << endl;
      cout<<endl;
      cout<<"1) Motagua " << endl;
      cout<<"2) Olimpia" << endl;
      cout<<"3) Vida " << endl;
      cout<<"4) Platense " << endl;
      cin>> respuesta; 
      
       if (respuesta== 2)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
     
      
      
      
          porcentaje = (correctas*100)/10;
				system("cls");
				
				cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				 cout<<"                            =================================================================   "<<endl;
				 cout << "                                                 R E S U L T A D O S                " << endl;
				 cout<<"                            =================================================================   "<<endl;
				cout<< endl;
			  	cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS CORRECTAS : "  << correctas << endl;
				cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS INCORRECTAS: " <<incorrectas << endl;	
				cout<<endl;
                cout<<endl;
				cout << "                                             TU PORCENTAJE ES :  "     << porcentaje << "% " << endl;
				
				cout<<endl;
                cout<<endl;
                system("pause");
      
      
      
        
    	break;
    }
   
    case 3: 
	{
	  system("cls");
     gotoxy (50,0); cout<<"-----------------"<<endl;
     gotoxy (50,1); cout<<" G E O G R F I A " << endl;
     gotoxy (50,2); cout<<"-----------------"<<endl;
      
      cout<<"1- ¿Cuál de estos océanos baña a nuestro país?" << endl;
      cout<<endl;
      cout<<"1) Oceano Alantico " << endl;
      cout<<"2) Oceano Artico " << endl;
      cout<<"3) Oceano Indico " << endl;
      cout<<"4) Oceano Antartico " << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      cout<<"2- ¿Cuál es la extensión territorial de Honduras?" << endl;
      cout<<endl;
      cout<<"1) 112,500 km2 " << endl;
      cout<<"2) 114,492 km2. " << endl;
      cout<<"3) 111,699 km2. " << endl;
      cout<<"4) 112,492 km2. " << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      cout<<"3- ¿Cuál es la montaña más alta de Honduras?" << endl;
      cout<<endl;
      cout<<"1) Pico Celaque " << endl;
      cout<<"2) Montaña de Santa Bárbara  " << endl;
      cout<<"3) Sierra de Agalta " << endl;
      cout<<"4) Sierra Pico Bonito " << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0");
      cout<<endl;
      cout<<endl;
      
      
      
      cout<<"4- ¿Como se llama el departamento insular del país?" << endl;
      cout<<endl;
      cout<<"1) Atlantida " << endl;
      cout<<"2) Colon " << endl;
      cout<<"3) Islas de la Bahia " << endl;
      cout<<"4) Cortes " << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl;
      
      
      
      
      cout<<"5- ¿Con quién limita Honduras al este?" << endl;
      cout<<endl;
      cout<<"1) Guatemala" << endl;
      cout<<"2) Nicaragua " << endl;
      cout<<"3) El Salvador" << endl;
      cout<<"4) Belice " << endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1;  
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl;
      
      system("cls");
      
      
      
      cout<<"6-En Honduras está ubicado el segundo arrecife de coral más grande del mundo, Selecciona dónde se encuentra." << endl;
      cout<<endl;
      cout<<"1) Tela" << endl;
      cout<<"2) Roatan " << endl;
      cout<<"3) Utila" << endl;
      cout<<"4) Amapala " << endl;
      cin>> respuesta; 
      
      if (respuesta== 3)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl; 
      
      
      
      cout<<"7- ¿Dónde está ubicado el Jardín Botánico Lancetilla? " << endl;
      cout<<endl;
      cout<<"1) Tela" << endl;
      cout<<"2) La Ceiba " << endl;
      cout<<"3) Juticalpa " << endl;
      cout<<"4) Santa Rita " << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
       system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; ; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl; 
      
      
      
      cout<<"8- Es considerada una de las cataratas más bella de Centroamérica." << endl;
      cout<<endl;
      cout<<"1) Cascada El Bejuco" << endl;
      cout<<"2) Cascada o Chorro de Río Grande " << endl;
      cout<<"3) Cascada El Chiflador " << endl;
      cout<<"4) Catarata de Pulhapanzak " << endl;
      cin>> respuesta; 
      
      if (respuesta== 4)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl; 
      
      
      
      cout<<"9- ¿Dónde se da la lluvia de peces?" << endl;
      cout<<endl;
      cout<<"1) Yoro,Yoro" << endl;
      cout<<"2) Tegucigalpa,Francisco Morazan " << endl;
      cout<<"3) Marcala, La Paz " << endl;
      cout<<"4) Cantarranas, Francisco Morazan" << endl;
      cin>> respuesta; 
      
      if (respuesta== 1)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1; 
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl; 
      
      
      cout<<"10- ¿Cuál es rio más grande del país?" << endl;
      cout<<endl;
      cout<<"1) Rio Patuca" << endl;
      cout<<"2) Rio Coco Segovia" << endl;
      cout<<"3) Rio Ulua " << endl;
      cout<<"4) Río Chamelecon "<< endl;
      cin>> respuesta; 
      
      if (respuesta== 2)
      {
        system("COLOR E2"); cout<<"RESPUESTA CORRECTA "<<endl;
        correctas=correctas+1; 
      }
      
      else {
      	 system("COLOR 04");cout<<" RESPUESTA INCORRECTA " <<endl;
      	 incorrectas=incorrectas +1;
      }
      
      system("pause");
      system("COLOR B0"); 
      cout<<endl;
      cout<<endl; 
      


     porcentaje = (correctas*100)/10;
				system("cls");
			
			
			    cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				 cout<<"                            =================================================================   "<<endl;
				 cout << "                                                 R E S U L T A D O S                " << endl;
				 cout<<"                            =================================================================   "<<endl;
				cout<< endl;
			  	cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS CORRECTAS : "  << correctas << endl;
				cout<<endl;
                cout<<endl;
				cout << "                                             RESPUESTAS INCORRECTAS: " <<incorrectas << endl;	
				cout<<endl;
                cout<<endl;
				cout << "                                             TU PORCENTAJE ES :  "     << porcentaje << "% " << endl;
				
				cout<<endl;
                cout<<endl;
                system("pause");
      
      
	
    	
    	
    	break;
    }
   
    
}


	
	
}





