#ifndef TIENDA_H
#define TIENDA_H
#include<string>
#include<cstring>
    struct videojuego{
        int id;
        std::string nombre;
        float precio; 
        std::string consola;

        void imprimir();
    };
    extern videojuego tienda[50];
void lista_juegos(videojuego[], int);
void ordenarPorNombre(videojuego arreglo[], int cantidad);
void buscarporconsola();
#endif