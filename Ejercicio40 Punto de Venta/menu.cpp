#include <iostream>
using namespace std; 

void menu(){
 int opcion=0;
  while (true)
  {
   cout<<"****";
   cout<<"MENU";
   cout<<"****";
   cout<< endl;

   cout<<"1- Bebidad Calientes" << endl;
   cout<<"2- Bebidad Frias" << endl;
   cout<<"3- Reposteria" << endl;
   cout<<"0- Salir" << endl;

   cin>> opcion; 

   if (opcion==0)
   {
      break;
   }
   

  }
  

}



