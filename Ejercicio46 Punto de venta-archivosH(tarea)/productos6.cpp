#include <iostream>
#include <cstdlib>
#include "encabezados.h"

using namespace std; 


void productos ( int opcion ) 
{
   system("cls");

   int opcionProducto=0;
   
   switch (opcion)
   {
   case 1: {
     cout<<"BEBIDAS CALIENTES" << endl;
     cout<<"*******************"<< endl;
     cout<<"1- Capuccino"<< endl;
     cout<<"2- Expresso"<< endl;
     cout<<endl;

     cout<<"Ingrese una opcion : ";
     cin>> opcionProducto;
     
     switch (opcionProducto)
     {
     case 1:
       agregarProducto("1 Capuccino - L 40.00 ", 1, 40);
        break;
     case 2:
       agregarProducto("1 Expresso - L 30.00 ", 1, 30);
        break;
     
     default:
     {
      cout<<"Opcion no valida";
        return;
        break;
     }

     }
     cout<<endl;
     cout<<"Producto agregado";
     cout<<endl;
     cout<<endl;
     system("pause");

     break;
   }
   
  case 2: {
     cout<<"BEBIDAS FRIAS" << endl;
     cout<<"**************"<< endl;
     cout<<"1- Frappe de Chocolate "<< endl;
     cout<<"2- Smoothie de Fresa"<< endl;
     cout<<"3- Granita"<< endl;
     cout<<endl;

     cout<<"Ingrese una opcion : ";
     cin>> opcionProducto;


     switch (opcionProducto)
     {
     case 1:
       agregarProducto("1 Frappe de Chocolate - L 50.00 ", 1, 50);
        break;
     case 2:
       agregarProducto("1 Smoothie de Fresa - L 25.00 ", 1, 25);
        break;
     case 3:
       agregarProducto("1 Granita - L 35.00 ", 1, 35);
        break;

     default:
     {
      cout<<"Opcion no valida";
        return;
        break;
     }

     }
     
     cout<<endl;
     cout<<"Producto agregado";
     cout<<endl;
     cout<<endl;
     system("pause");  

    break;
   }  
  case 3: {
     cout<<"REPOSTERIA" << endl;
     cout<<"*********" << endl;
     cout<<"1- Cheescake "<< endl;
     cout<<"2- Pie de Limon "<< endl;
     cout<<"3- Pastel de tres leches"<< endl;
     cout<<endl;

     cout<<"Ingrese una opcion : ";
     cin>> opcionProducto;

     switch (opcionProducto)
     {
     case 1:
       agregarProducto("1 Cheescake - L 50.00 ", 1, 50);
        break;
     case 2:
       agregarProducto("1 Pie de Limon - L 40.00 ", 1, 40);
        break;
     case 3:
       agregarProducto("1 Pastel de tres leches - L 45.00 ", 1, 45);
        break;

     default:
     {
      cout<<"Opcion no valida";
        return;
        break;
     }

     }

     cout<<endl;
     cout<<"Producto agregado";
     cout<<endl;
     cout<<endl;
     system("pause");  
    break;
   } 
   
   default:
    break;
   }

}

// Realizado por Marlenne Alexa Ortiz
