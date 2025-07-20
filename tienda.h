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

void lista_juegos(videojuego[], int);
void ultimaLista(int);
void ordenarPorNombre();
void buscarporconsola();
#endif