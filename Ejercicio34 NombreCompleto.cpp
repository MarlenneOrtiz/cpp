#include <iostream>
using namespace std; 

string nombtreCompleto( string nombre, string apellido) {
    return nombre + apellido ; 
}


int main(int argc, char const *argv[])
{
    string primerNombre =" ";
    string primerApellido=" ";

     cout<< "Ingrese su primer nombre : ";
     cin>> primerNombre;
     cout<< "Ingrese su primer apellido : ";
     cin>> primerApellido;
     
     cout<< endl;

     cout<< "Nombre completo: " << nombtreCompleto(primerNombre , primerApellido);


   

	return 0;	
}

