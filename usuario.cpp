#include<string>
#include<iostream>
#include"global.h"
#include"usuario.h"
using namespace std;
int contCuentas=3;
cuenta cuentas[MAX_CUENTAS]{
    {"usuario1@gmail.com","contrasena1"},
    {"usuario2@gmail.com","contrasena2"},
    {"usuario3@gmail.com","contrasena3"}
};

bool signin(cuenta cuentas[], int contCuentas) {
    bool encontrado = false;
    string usuario;
    string contra;

    cout << "Ingresa tu usuario: ";
    cin.ignore(); // para limpiar el búfer antes de getline
    getline(cin, usuario);

    cout << "Ingresa tu contraseña: ";
    getline(cin, contra);

    for (int i = 0; i < contCuentas; i++) {
        if (usuario == cuentas[i].usuario) {
            encontrado = true;
            if (contra == cuentas[i].contra) {
                cout << "Has ingresado con éxito" << endl;
                return true;
            } else {
                cout << "La contraseña es incorrecta" << endl;
                return false;
            }
            break;
        }
    }
    if (!encontrado) {
        cout << "El usuario no está registrado" << endl;
        return false;
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
   
