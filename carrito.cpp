#include<iostream>
#include"tienda.h"
#include"carrito.h"
#include<iomanip>
#include <ctime>
using namespace std;

videojuego carrito[10];
compra hist[10];
int contadorComprados=0;



void agregar_carrito(videojuego juegos[],int size,int id,int &contador){
    bool encontrado =false;
    if(contador<=50){    
        for(int i=0;i<size;i++){
            if(juegos[i].id==id){
                carrito[contador]=juegos[i];
                contador++;
                cout<<"Se agrego el juego al carrito\n";
                encontrado =true;   
            }
        }
        if (encontrado==false){
            cout<<"El id no existe. No se agrego ningun juego\n";
        }
    }
    else
        cout<<"El carrito esta lleno";
}
void pagar(compra hist[], int &contadorCarrito, int &contadorComprados){
    
    if(contadorCarrito==0){
        cout<<"No hay ningun juego en el carrito";
    }
    else{
        
        time_t ahora = time(0);
        tm* tiempo = localtime(&ahora);
        string hora_actual =to_string(tiempo->tm_hour) + ":" + 
        to_string(tiempo->tm_min) + ":" + 
        to_string(tiempo->tm_sec);
        for(int i = 0; i < contadorCarrito; i++){
            hist[contadorComprados+i].juego = carrito[i];
            hist[contadorComprados+i].fecha_hora = hora_actual;
        }
        contadorComprados += contadorCarrito; //cantidad de juegos comprados
        cout<<"Compra existosa";
        cout << "\n\tHora de compra: " << hora_actual<< endl;
        contadorCarrito=0;
        
    }
}