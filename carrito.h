#ifndef CARRITO_H
#define CARRITO_H
#include "tienda.h"    
    struct compra{
        videojuego juego;
        std::string fecha_hora;
    };
    extern videojuego carrito[50];
    extern compra hist[50];
    void agregar_carrito(videojuego [],int ,int id,int &);
    void pagar(int &);

#endif