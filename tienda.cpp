#include<iostream>
#include"tienda.h"
#include<iomanip>
#include<algorithm>
using namespace std;
videojuego tienda[50]={
    {"The Legend of Zelda: Breath of the Wild", 59.99, "Nintendo Switch"},
    {"Super Mario Odyssey", 49.99, "Nintendo Switch"},
    {"Animal Crossing: New Horizons", 54.99, "Nintendo Switch"},
    {"Mario Kart 8 Deluxe", 49.99, "Nintendo Switch"},
    {"Splatoon 3", 59.99, "Nintendo Switch"},
    {"God of War: Ragnarok", 69.99, "PlayStation 5"},
    {"FIFA 23", 59.99, "PlayStation 5"},
    {"Horizon Forbidden West", 59.99, "PlayStation 5"},
    {"Spider-Man: Miles Morales", 49.99, "PlayStation 5"},
    {"Gran Turismo 7", 69.99, "PlayStation 5"},

};

void videojuego::imprimir(){
    cout<<left<<setfill(' ')<<setw(40)<<nombre
        <<"$"<<right<<setw(8)<<precio
        <<" "<<left<<setw(30)<<consola<<endl;
    
}
void lista_juegos(){
    cout   <<"xxxxxxxxLista de juegos disponiblesxxx"<<endl;
    for(int i=0;i<5;i++){
        cout<<setfill('0')<<right<<setw(3)<<i+1<<" ";tienda[i].imprimir();
    }
    cout    <<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
}
void ordenarPorNombre(videojuego juegos[], int cantidad) {
    std::sort(juegos, juegos + cantidad, [](const videojuego &a, const videojuego &b) {
        return a.nombre < b.nombre;
    });
}