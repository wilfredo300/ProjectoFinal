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
    cout << "----------- TIENDA DE VIDEOJUEGOS -----------\n";
        do{
            //system("cls");
            cout << "--- JUEGOS DISPONIBLES ---\n";
            cout << "1. Ordenar por Id\n";
            cout << "2. Ordenar alfabeticamente\n";
            cout << "3. Mostrar por consola\n";
            cout << "4. Agregar al carrito\n";
            cout << "5. Mostrar carrito\n";
            cout << "6. Mostrar juegos comprados\n";
            cout << "0. Volver\n";
            cout << "Opcion: ";
            cin >> op;
            switch(op){
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
                    cout<<"Ingrese el id del juego para agregar al carrito (0 para regresar) \n";
                    do{
                        cin>>id;
                        if(id>0 && id<=10){
                            agregar_carrito(tienda,10,id, contadorCarrito);
                            cout<<"Ingrese otro juego o presione 0 para salir: "<<endl;
                        }else if(id==0) 
                            break;
                        else {
                            cout<<"No existe el id"<<endl;
                            continue;
                        }
                    } while(id!=0);
                
                    break;
                    }
                case 5:
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
                        case 2:
                            int seleccion;
                            cout << "Seleccione el numero del juego a quitar (0 para cancelar): ";
                            cin >> seleccion;
                            quitardelCarrito(tienda,seleccion,contadorCarrito);
                            break;
                        case 0:
                            break;
                        default:  
                            cout<<"Opcion no valida\n";
                            
                    }
                    system("pause");
                    break;
                case 6:  //juegos comprados
                    for(int i=0; i<contadorComprados;i++){
                        hist[i].imprimir(); //imprime los juegos comprados por fecha y hora
                    }
                    system("pause");
                    break;
                case 0:
                    break;
                default:  
                    cout<<"Opcion no valida\n";
            }          
        } while(op!=0);
    return 0;
}


