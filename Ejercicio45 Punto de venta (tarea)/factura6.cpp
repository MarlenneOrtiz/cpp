#include <iostream>
#include <cstdlib>


using namespace std; 

double subtotal;
double total; 
double impuesto = 0.15;
string listaProductos;

void agregarProducto( string descripcion,int cantidad, double precio) 
{
   listaProductos=listaProductos + descripcion + '\n' ;
   subtotal=subtotal + (cantidad* precio);
   total=subtotal+(subtotal * impuesto);

}

void imprimirFactura()   
{
   system("cls");
   cout<<"*******"<<endl;
   cout<<"FACTURA"<<endl;
   cout<<"*******"<<endl;
   cout<<endl;

   cout<<"Productos"<<endl;
   cout<<listaProductos;

   cout<<endl;
   cout<<"Subtotal: "<<subtotal;
   cout<<endl;
   cout<<"Total a pagar : "<<total;
   cout<<endl;
   system("pause");
}

// Realizado por Marlenne Alexa Ortiz
