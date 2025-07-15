#include<iostream>
#include"tienda.h"
#include"carrito.h"
#include<iomanip>
using namespace std;

videojuego carrito[50];




void agregar_carrito(videojuego juegos[],int size,int id,int &contador){
    bool encontrado =false;
    for(int i=1;i<size;i++){
        if(juegos[i].id==id){
            carrito[contador]=juegos[i];
            contador++;
            cout<<"Se agregó el juego al carrito\n";
            encontrado =true;   
        }
    }
    if (encontrado==false){
        cout<<"El id no existe. No se agregó ningún juego\n";
    }
}