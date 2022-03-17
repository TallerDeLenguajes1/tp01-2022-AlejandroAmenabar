#include <stdio.h>
#include <stdlib.h>
int Cuadrado (int a);//ejercicio 2)a
void Cuadrado2 (int *a); //ejercicio 2)b
int main(){
    //ejercicio 2)a)
    // int x,y;
    // printf("\nIngrese un numero entero: ");
    // scanf("%d",&x);
    // y = Cuadrado(x);
    // printf("el cuadrado del numero es: %i ",y);

    //ejercicio 2)b)
    int x;
    int *pint;
    pint=&x;
    printf("\nIngrese un numero entero: ");
    scanf("%d",&x);
    Cuadrado2(&x);
    printf("el cuadrado del numero es: %i ",*pint);
    
    return 0;
}

int Cuadrado (int a)
{
    int b;
    b=a*a;
    return b;
}

void Cuadrado2 (int *a)
{
    (*a)=(*a)*(*a);
}