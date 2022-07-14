#include <iostream>
#include <math.h>

using namespace std; 


int main(int argc, char const *argv[])
{
    int numero=0;
    double resultado=0;

    cout<< "Ingrese el numero para calcular su raiz cuadrada: ";
    cin>> numero;
    cout<<endl;

    if (numero < 1)
    {
      cout<<"No existen raices cuadradas de numeros negativos ";
      cout<<endl;
    }
    
    else
	{
     resultado=sqrt(numero);
     cout<<"La raiz cuadrada de "<< numero <<" es : " << resultado ;
    }
    

	return 0;	
}



//Realizado por: Marlenne Alexa Ortiz

