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
    system("cls");
    cout << "----------- TIENDA DE VIDEOJUEGOS -----------\n";
    cout << "1. Mostrar juegos disponibles\n";
    cout << "2. Mostrar carrito\n";
    cout << "3. Mostrar juegos comprados\n";
    cout << "0. Salir\n";
    cout << "Ingrese una opcion: ";
    cin >>op;
    switch(op){
        case 1:
            int subop;
            system("cls");
            cout << "--- JUEGOS DISPONIBLES ---\n";
            cout << "1. Mostrar todos\n";
            cout << "2. Ordenar alfabeticamente\n";
            cout << "3. Buscar por consola\n";
            cout << "4. Seleccionar juego\n";
            cout << "0. Volver\n";
            cout << "Opcion: ";
            cin >> subop;
            switch(subop){
                case 1:lista_juegos();
                case 2:
                case 3: 
                case 4:
                case 0: break;

            }
        case 2:
        case 3:
        case 0:
    }
    cin>>op;
    op=tolower(op);
    system("pause");
    system("cls");
} while(op!=0);
return 0;
}


