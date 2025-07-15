#include<iostream>
#include"tienda.h"
#include<iomanip>
#include<algorithm>
using namespace std;
<<<<<<< HEAD
videojuego tienda[50]={
=======
videojuego tienda[10]={
>>>>>>> Colaboracion-2
    {1,"The Legend of Zelda: Breath of the Wild", 59.99, "Nintendo Switch"},
    {2,"Super Mario Odyssey", 49.99, "Nintendo Switch"},
    {3,"Animal Crossing: New Horizons", 54.99, "Nintendo Switch"},
    {4,"Mario Kart 8 Deluxe", 49.99, "Nintendo Switch"},
    {5,"Splatoon 3", 59.99, "Nintendo Switch"},
    {6,"God of War: Ragnarok", 69.99, "PlayStation 5"},
    {7,"FIFA 23", 59.99, "PlayStation 5"},
    {8,"Horizon Forbidden West", 59.99, "PlayStation 5"},
    {9,"Spider-Man: Miles Morales", 49.99, "PlayStation 5"},
    {10,"Gran Turismo 7", 69.99, "PlayStation 5"},

};

void videojuego::imprimir(){
    cout<<right<<setfill(' ')<<setw(4)<<id
        <<left<<" "<<setw(40)<<nombre
        <<"$"<<right<<setw(8)<<precio
        <<" "<<left<<setw(30)<<consola<<endl;
    
}
void lista_juegos(){
    cout   <<"xxxxxxxxLista de juegos disponiblesxxx"<<endl;
<<<<<<< HEAD
    for(int i=0;i<5;i++){
=======
    for(int i=0;i<10;i++){
>>>>>>> Colaboracion-2
        tienda[i].imprimir();
    }
    cout    <<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
}
void ordenarPorNombre(){
    videojuego copia[10];
    for(int i = 0; i < 10; i++) {
        copia[i] = tienda[i];
    }
    sort(copia, copia + 10, [](const videojuego &a, const videojuego &b) {
        return a.nombre < b.nombre;
    });
    cout << "----- JUEGOS ORDENADOS ALFABÉTICAMENTE -----\n";
    for(int i = 0; i < 10; i++) {
        copia[i].imprimir();
    }
    cout << "-------------------------------------------\n";
}
void buscarporconsola(){
    string consola;
    cout << "Ingrese la consola a buscar: ";
    cin.ignore();
    getline(cin,consola);
    bool encontrado = false;
    for(int i = 0; i < 10; i++) {
        if(tienda[i].consola == consola) {
            cout << i+1 << ". ";tienda[i].imprimir();
            encontrado = true;
        }
    }
    if(encontrado==false) {
        cout << "No se encontraron juegos para esta consola.\n";
    }
}