#include <iostream>
using namespace std; 

int main(int argc, char** argv) {
	
	double subtotal=0; 
	double total= 0;
	double impuesto=0; 
	int descuento= 0; 
	double caldescuento=0;
	double calimpuesto=0; 
	char exenta; 
	
	cout<< "Ingrese el subtotal :"; cin>>subtotal  ;
	cout<< "Ingrese el descuento (0, 10, 15, 20) : "; cin>> descuento  ;  
	cout<< " Factura exenta? s/n : "; cin>> exenta  ; 

if ( exenta == 's'  || exenta == 'S')
{
      caldescuento=(subtotal*descuento) /100 ;
	  calimpuesto=0; 
	  	total=subtotal - caldescuento + calimpuesto ;
	  	cout<<endl;
	  	cout<<"El total :" <<total;
}	


else {
caldescuento=(subtotal*descuento) /100 ;
	calimpuesto=(subtotal-caldescuento) * 0.15 ;
	total=subtotal - caldescuento + calimpuesto ;
	
	cout<<endl;
	cout<<"El total :" <<total; 	
}	

	
return 0 ; 
}
// Realizado por: Marlenne Alexa Ortiz 
