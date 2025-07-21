#include<string>
#include<iostream>
#include"global.h"
#include"usuario.h"
using namespace std;
int contCuentas=3;
cuenta cuentas[size]{
    {"usuario1@gmail.com,contraseña1"},
    {"usuario2@gmail.com,contraseña2"},
    {"usuario3@gmail.com,contraseña3"}
};

void signin(std::string usuario,std::string contra,cuenta cuentas[],int contCuentas){ 
    for(int i=0;i<contCuentas;i++){
        if(usuario==cuentas[i].usuario){
            if(contra==cuentas[i].contra){
                std::cout<<"Has ingresado con éxito"<<std::endl;
            }else{
                std::cout<<"La contraseña es incorrecta"<<std::endl;
            }  
        }else{
            std::cout<<"El usuario no está registrado"<<std::endl;
        }
    }
}
void agregarCuenta(cuenta cuentas[], int& contCuentas) {
    bool yaExiste;
    string nuevoUsuario;
    string nuevaContra;
    do {
        yaExiste = false;
        cout << "Ingresa un usuario: ";
        cin >> nuevoUsuario;
        for (int i = 0; i < contCuentas; i++) {
            if (nuevoUsuario == cuentas[i].usuario) {
                yaExiste = true;
                cout << "El usuario ya existe, intenta nuevamente." << endl;
                break;
            }
        }
    } while (yaExiste);
    do {
        cout << "Ingresa una contraseña (mínimo 6 caracteres): ";
        cin >> nuevaContra;

        if (nuevaContra.length() < 6) {
            cout << "Contraseña demasiado corta. Intenta nuevamente." << endl;
        }

    } while (nuevaContra.length() < 6);

    cuentas[contCuentas].usuario = nuevoUsuario;
    cuentas[contCuentas].contra = nuevaContra;
    contCuentas++;

    cout << "Cuenta creada con éxito." << endl;
}
   
