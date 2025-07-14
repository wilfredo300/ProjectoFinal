#ifndef TIENDA_H
#define TIENDA_H
#include<string>
#include<cstring>
    struct videojuego{
        std::string nombre;
        float precio; 
        std::string consola;

        void imprimir();
    };
    
void lista_juegos();
void ordenarPorNombre(videojuego arreglo[], int cantidad);
void buscarporconsola();
#endif