#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n\tHola mundo!");
    
    int *punt;
    int x=3;
    punt=&x;
    printf("\nEl contenido del puntero es %i",*punt);
    printf("\nla direccion de memoria almacenada por el puntero es %i",punt);
    printf("\nla direccion de memoria de la variable es: %i",&x);
    printf("\nla direccion de memoria del puntero es: %i",&punt);
    printf("\nEl tamano de memoria utilizado por x: %i",sizeof(int));

    
    return 0;
}