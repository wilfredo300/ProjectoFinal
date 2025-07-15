#ifndef CARRITO_H
#define CARRITO_H

    struct compra{
        videojuego videojuego;
        std::string fecha_hora;
    };

    extern videojuego carrito[50];
    void agregar_carrito(videojuego [],int ,int id,int &);


#endif