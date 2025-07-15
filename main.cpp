#include<iostream>
#include<iomanip>
#include "tienda.h"
#include "carrito.h"
using namespace std;

int main(){
<<<<<<< HEAD
    videojuego copia[10];
=======
    
>>>>>>> carrito
    int op;
    int contadorCarrito=0;;
    
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
            case 1:{
                int subop;
                system("cls");
                cout << "--- JUEGOS DISPONIBLES ---\n";
                cout << "1. Mostrar todos\n";
                cout << "2. Ordenar alfabeticamente\n";
                cout << "3. Buscar por consola\n";
                cout << "4. Agregar al carrito\n";
                cout << "0. Volver\n";
                cout << "Opcion: ";
                cin >> subop;
                switch(subop){
                    case 1:lista_juegos(tienda, 5);
                        break;
<<<<<<< HEAD
                    case 2:ordenarPorNombre();
=======
                    case 2:ordenarPorNombre(tienda,10);
                        lista_juegos(tienda,5);
>>>>>>> carrito
                        break;
                    case 3:buscarporconsola();
                        break;
                    case 4:{
                        int id; 
                        cout<<"Ingrese el id del juego para agregar al carrito: \n";
                        cin>>id;
                        agregar_carrito(tienda,5,id,contadorCarrito);
                        cout<<"Se modifica el contador?"<<contadorCarrito<<endl;
                        break;
                    }
                    case 0:
                        break;
                }
                system("pause");
                break;
            }
            case 2: 
                for(int i=0;i<contadorCarrito;i++){
                    carrito[i].imprimir();
                }
                system("pause");
                break;

            case 3: break;
            case 0: break;
        }
        system("cls");
    } while(op!=0);
    return 0;
}


