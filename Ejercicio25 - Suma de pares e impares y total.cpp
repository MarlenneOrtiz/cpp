#include <iostream>
using namespace std; 

int main(int argc, char** argv) {

int pares=0;
int impares=0;
int total=0;
int valorinicial=0;
int valorfinal=0;

cout<< "Ingrese el valor inicial "; cin>>valorinicial ;
cout<< "Ingrese el valor final "; cin>>valorfinal ;
cout<<endl;

 for(int i =valorinicial; i <= valorfinal; i = i ++)
{
   if(i%2==0) {
   	pares=pares+i;
   	cout<<i <<" Numero Par"<<endl;
   }
   else {
   	impares=impares+i;
   	cout<<i <<" Numero Impar"<<endl;
   }
    total=impares+pares;
}
cout<<endl;
cout<<endl;
cout<<"Total pares:"<<pares;
cout<<endl;
cout<<"Total impares:"<<impares;
cout<<endl;
cout<<"Total: "<<total;

return 0;
}

// Realizado por: Marlenne Alexa Ortiz
