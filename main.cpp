#include<iostream>
#include"tienda.h"
#include"carrito.h"
using namespace std;
int main(){
    
extern videojuego tienda[];
for(int i=0;i<5;i++){
    cout<<i+1<<") ";tienda[i].imprimir();
}
 
return 0;
}