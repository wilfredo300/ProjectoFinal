#include<string>
#include<iostream>
#include"usuario.h"
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
void agregarCuenta(cuenta cuentas[], int& contCuentas){
    string nuevoUsuario;
    bool yaExiste=false;
    
    cout<<"Ingresa un usuario: "<<endl;
    cin>>nuevoUsuario;
    for(int i=0; i<n; i++){
        if(nuevoUsuario==cuentas[i].usuario){
            yaExiste=true;
        }
    }
}
