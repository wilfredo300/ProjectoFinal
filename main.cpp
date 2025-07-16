#include<iostream>
#include<iomanip>
#include "tienda.h"
#include "carrito.h"
#include <ctime>
using namespace std;

int main(){
    extern videojuego tienda[10];
    videojuego copia[10];
    int op;
    int contadorCarrito=0;
    
    do{
        system("cls");
        cout << "----------- TIENDA DE VIDEOJUEGOS -----------\n";
        cout << "1. Mostrar juegos disponibles\n";
        cout << "2. Mostrar carrito\n";
        cout << "3. Mostrar juegos comprados\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >>op;
        int subop;
        switch(op){
            case 1:{
                do{
                    //system("cls");
                    cout << "--- JUEGOS DISPONIBLES ---\n";
                    cout << "1. Mostrar todos\n";
                    cout << "2. Ordenar alfabeticamente\n";
                    cout << "3. Buscar por consola\n";
                    cout << "4. Agregar al carrito\n";
                    cout << "0. Volver\n";
                    cout << "Opcion: ";
                    cin >> subop;
                    switch(subop){
                        case 1:lista_juegos(tienda,10);
                            break;
                        case 2:
                            system("cls");
                            ordenarPorNombre();
                            break;
                        case 3:
                            system("cls");
                            buscarporconsola();
                            break;
                        case 4:{
                            int id; 
                            cout<<"Ingrese el id del juego para agregar al carrito: \n";
                            cin>>id;
                            agregar_carrito(tienda,10,id, contadorCarrito);
                        
                            break;
                        }
                        case 0:
                            break;
                        default:  
                            cout<<"Opcion no valida\n";
                    }
                    system("pause");
                }while(subop != 0);    
                break;
                
            }
           
            case 2: 
                for(int i=0;i<contadorCarrito;i++){
                    cout<<i+1<<".-";
                    carrito[i].imprimir(); 
                }
                if(contadorCarrito ==0){
                    cout<<"No hay juegos en el carrito\n";
                }
                cout << "\n1. Pagar\n";
                cout << "2. Quitar juego del carrito\n";
                cout << "0. Volver\n";
                cout << "Opcion: ";
                int subopcion;
                cin >> subopcion;
                switch(subopcion){
                    case 1:
                        pagar(hist, contadorCarrito, contadorComprados);
                        break;
<<<<<<< HEAD
                    case 2: //quitar juego del carrito
                        
=======
                    case 2:
                        int seleccion;
                        cout << "Seleccione el numero del juego a quitar (0 para cancelar): ";
                        cin >> seleccion;
                        quitardelCarrito(tienda,seleccion,contadorCarrito);
>>>>>>> 127596741aeed3e499606178474088ea117d58b5
                        break;
                    case 0:
                        break;
                    default:  
                        cout<<"Opcion no valida\n";
                        
                }
                system("pause");
                break;

            case 3:  //juegos comprados
                for(int i=0; i<contadorComprados;i++){
                    hist[i].imprimir(); //imprime los juegos comprados por fecha y hora
                }
                system("pause");
            break;
            case 0: break;
            default:  
                cout<<"Opcion no valida\n";
                system("pause");
        }
        system("cls");
        
    } while(op!=0);
    return 0;
}


