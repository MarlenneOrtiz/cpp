#include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	
int a; 
int b; 
int suma, resta , multiplicacion, division; 
suma=0, resta=0 , multiplicacion=0 , division=0 ;
b=0; 
a=0 ; 

cout<< "Ingrese el valor de a "; cin>>a  ; 
cout<<endl; 
cout<< "Ingrese el valor de b "; cin>>b  ; 
suma= a+b; 
resta= a-b;
multiplicacion= a*b;
division=a/b; 

cout<<endl; 
cout<< "La suma de los numeros es  : "  <<suma <<endl ; 
cout<< "La resta de los numeros es : " <<resta <<endl; 
cout<< "La multiplicacion de los numeros es:" <<multiplicacion <<endl; 
cout<< "La division de los numeros es :"<<division << endl; 
	
	return 0;
}
// Realizado por : Marlenne Alexa Ortiz 
