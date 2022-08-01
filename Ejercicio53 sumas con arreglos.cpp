#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 

int main(int argc, char const *argv[])
{
    int Arreglo [5][5];

    srand(time (NULL));

    int alAzar=0;
    int suma = 0; 
    
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            alAzar=rand() % 10+1;
            Arreglo[i][j] = alAzar;
            cout << "|" << Arreglo[i][j] << "|"  << " ";
            suma +=Arreglo[i][j];
        }
       cout << endl; 
    }
   
     
    cout << endl;
    cout << "Total de La suma es: " << suma << endl;
     

    return 0;
}

// Hecho por : Marlenne Alexa Ortiz 
