#include<iostream>
#include<"tienda.h>
videojuego tienda[50]={
    {"juego1",30,"nintendo"}
    {"juego2",30,"nintendo"}
    {"juego3",30,"play station 1"}
    {"juego4",30,"play station 2"}
    {"juego5",30,"play station 2"}

}

void imprimirJuegosTienda(){
    for(int i=0;i<10;i++){
        cout<<tienda[i].nombre<<", $"<<tienda[i].precio<<", "<<tienda[i].consola;
    }
    
}
