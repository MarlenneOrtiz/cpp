#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 



int main(int argc, char const *argv[])
{
    int dado1;
    int dado2;
    int lanzar;
    int a =1; 
    
    cout<<" LANZAMIENTO DE DADOS: "<<endl;
    cout<<endl;
    cout<<"------------------------- "<<endl;
    cout<<"Ingrese el numero de lanzamientos que desea realizar: "<<endl;
    cin>>lanzar;


    srand(time (NULL));



    while (a <= lanzar)
    {
    	cout<<"Lanzamiento # "<< a <<endl ;
    	cout<<endl;
    	
        for (int i = 0; i < 1 ; i++)
    {
        
          dado1=rand() % 6+1;
          dado2=rand() % 6+1;       

    }
    
        cout<<" El resultado del dado 1: " <<dado1 << endl;
        cout<<" El resultado del dado 2: " <<dado2 << endl;
        cout<<endl;
   
        a++;
    
    }

     
	return 0;	
}
