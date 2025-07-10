#ifndef TIENDA_H
#define TIENDA_H
   struct videojuego{
        string nombre;
        int precio;
        string consola;
    };
extern videojuego tienda[50];
void imprimirJuegosTienda();

#endif