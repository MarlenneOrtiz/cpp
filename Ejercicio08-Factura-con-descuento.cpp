#include <iostream>
using namespace std; 

int main(int argc, char** argv) {

double subtotal = 0;
double total=0;
double impuesto=0.15;
int descuento= 0;
double calculodescuento=0;
double calculoImpuesto=0;

cout<< "Ingrese el subtotal de la factura "; cin>>subtotal ;
cout<< "Ingrese el descuento (0,10,15,20) : "; cin>>descuento;

calculodescuento= (subtotal*descuento)/100;
calculoImpuesto= (subtotal - calculodescuento)*0.15;
total= subtotal-calculodescuento +calculoImpuesto;

cout<<endl; 
cout<<"Total a pagar es : "<<total; 
return 0;
}
