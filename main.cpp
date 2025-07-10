#include<iostream>
#include"funcion.h"
using namespace std;
int main(){

 
    videojuego tienda[50];
    tienda[0]={"Minecraft",35,"Nintendo Switch"};
    cout<<tienda[0].nombre<<", $"<<tienda[0].precio<<", "<<tienda[0].consola;
    return 0;
}