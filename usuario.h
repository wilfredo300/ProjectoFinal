#ifndef USUARIO_H
#define USUARIO_H
#include<cstring>


struct cuenta{
    std::string usuario;
    std::string contra;
};
void agregarCuenta(cuenta cuentas[], int& contCuentas);
bool signin(cuenta cuentas[], int contCuentas);
extern cuenta cuentas[];
extern int contCuentas;
#endif