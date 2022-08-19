#include<iostream>
#include<math.h>
using namespace std;
int main() { 
int numero,opcion;
double cubo;
cout<<"1. Opercacion del cubo de un numero :"<<endl;
cout<<"2. Numero par o impar :"<<endl;
cout<<"3.  SALIR  :"<<endl;
cout<<"Opcion  :";cin>>opcion;

switch(opcion) { 
case 1:cout<<"Ingrese un numero:";cin>>numero;
		cubo=pow(numero, 3);
cout<<"El cubo del numero es  :"<<cubo;break;


case 2:
	cout<<"Ingrese un numero:";cin>>numero;
	if(numero% 2 == 0){
	cout<<"El numero es par";
	}
	else {
	cout<<"El numero es impar";
	}

case 3: break ;
}
return 0; 

}


