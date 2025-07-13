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
    cout<<nombre<<", $"<<precio<<", "<<consola<<endl;
    
}
void lista_juegos(){
     cout   <<"xxxxxxxxLista de juegos disponiblesxxx"<<endl;
    for(int i=0;i<5;i++){
        cout<<setfill('0')<<setw(3)<<i+1<<" ";tienda[i].imprimir();
    }
    cout    <<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
}