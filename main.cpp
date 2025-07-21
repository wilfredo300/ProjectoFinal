#include<iostream>
#include<iomanip>
#include "tienda.h"
#include "carrito.h"
#include "global.h"
#include "usuario.h"
#include <ctime>
using namespace std;

int main(){
    videojuego copia[size];
    int op;
    int ultOrden=0;
    int contadorCarrito=0;
    int opcion;
    bool ingresado =false;
    cout << "----------- TIENDA DE VIDEOJUEGOS -----------\n";
        do {
        cout << "\n--- MENU ---\n";
        cout << "1. Iniciar sesion\n";
        cout << "2. Registrar nueva cuenta\n";
        cout << "0. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;
        

        switch (opcion) {
            case 1:
                ingresado=signin(cuentas, contCuentas);
                break;
            case 2:
                agregarCuenta(cuentas, contCuentas);
                break;
            case 0:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Intenta otra vez.\n";
        }
    } while (opcion != 0 && ingresado==false);
            
            do{ 
                ultimaLista(ultOrden);
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
                    case 1:lista_juegos(tienda,size);
                    system("cls");
                    ultOrden=op;
                    break;
                    case 2:
                    
                        system("cls");
                        ordenarPorNombre();
                        ultOrden=op;
                        break;
                    case 3:
                        system("cls");
                        buscarporconsola();
                        break;
                    case 4:{
                        int id; 
                        cout<<"Ingrese el id del juego para agregar al carrito (0 para regresar) \n";
                        do{
                            ultimaLista(ultOrden);
                            cout<<"Ingrese otro juego o presione 0 para salir: "<<endl;
                            cin>>id;
                            if(id>0 && id<=size){
                                agregar_carrito(tienda,size,id, contadorCarrito);
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


