#include <iostream>
using namespace std; 

int sumar(){

	return 5+7;
}

string nombreCompleto(){
	 string nombre="Juan";
	 string apeillido="Perez";
	 return nombre +" " + apeillido;

}


int main(int argc, char const *argv[])
{
	int resultado= sumar();
    string nombreyApeilldo = nombreCompleto();
     
	 cout <<resultado;
	 cout <<endl;
	 cout <<nombreyApeilldo;

	return 0;
}

