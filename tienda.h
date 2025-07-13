#ifndef TIENDA_H
#define TIENDA_H

#include<cstring>
   struct videojuego{
        std::string nombre;
        int precio;
        std::string consola;

        void imprimir();
    };
    
    void mostrar_lista_de_juegos(); 

#endif