#include<iostream>
#include<iomanip>
#include"tienda.h"
#include"carrito.h"
using namespace std;

int main(){
    
//muestra la lista de video juegos
extern videojuego tienda[]; //estrae la variable desde tienda.cpp
char op;
do{
    lista_juegos();
    cout<<  "1) Ordenar por nombre\n"
            "2) Ordenar por consola\n"
            "3) Agregar un juego al carrito\n";
    cout<<"Ingresa una opción: ";
    cin>>op;
    op=tolower(op);
    system("pause");
    system("clear");
} while(op!=0);
return 0;
}


