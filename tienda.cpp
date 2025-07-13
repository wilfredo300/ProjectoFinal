#include<iostream>
#include"tienda.h"
using namespace std;
videojuego tienda[50]={
    {"juego1",30,"nintendo"},
    {"juego2",30,"nintendo"},
    {"juego3",30,"play station 1"},
    {"juego4",30,"play station 2"},
    {"juego5",30,"play station 2"}

};

void videojuego::imprimir(){
    std::cout<<nombre<<", "<<precio<<", "<<consola<<endl;
    
}
