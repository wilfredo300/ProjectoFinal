#ifndef CARRITO_H
#define CARRITO_H
#include "tienda.h"    
    struct compra{
        videojuego juego;
        std::string fecha_hora;

        void imprimir();
    };
    extern videojuego carrito[10];
    extern compra hist[10];
    extern int contadorComprados;
    void agregar_carrito(videojuego [],int ,int id,int &);
    void pagar(compra [], int&, int&);
    void quitardelCarrito(videojuego[],int,int &);
    
#endif