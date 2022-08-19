#include<iostream>
#include<math.h>
using namespace std;
int main() { 
int llantas , total=0;
cout<<"Ingrese el numero de llantas:";cin>>llantas;


if( llantas<3) { 
total=llantas*1200;
cout<<"El precio por cada llanta es 1,200lps";
cout<<"\nEl total a pagar es:"<<total <<endl; 
}


else if (llantas<8) { 
total=llantas*1000;
cout<<"El precio por cada llanta es de 1,000lps" ;
cout<<"\nEl total a pagar es:"<<total <<endl; 

}
else {
	total=llantas*800;
cout<<"El precio por cada llanta es de 800lps" ;
cout<<"\nEl total a pagar es:"<<total <<endl; 
cout<<"\nPor su compra ha ganado un cambio de aceite gratis" ;
 }


return 0; 

}
