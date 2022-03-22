#include <stdio.h>
#include <stdlib.h>
int Cuadrado (int a);//ejercicio 2)a
void Cuadrado2 (int *a); //ejercicio 2)b
void Invertir(int *a,int *b); //ejercicio 2)d)
void Orden(int *a,int *b); //ejercicio 2)e)

int main(){
    //ejercicio 2)a)
    // int x,y;
    // printf("\nIngrese un numero entero: ");
    // scanf("%d",&x);
    // y = Cuadrado(x);
    // printf("el cuadrado del numero es: %i ",y);

    //ejercicio 2)b)
    // int x;
    // int *pint;
    // pint=&x;
    // printf("\nIngrese un numero entero: ");
    // scanf("%d",&x);
    // Cuadrado2(&x);
    // printf("el cuadrado del numero es: %i ",*pint);

    //ejercicio 2)c)
    // int x;
    // printf("Ingrese un numero: ");
    // scanf("%i",&x);
    // printf("el contenido de la variable es %d y su direccion de memoria %d",x,&x);

    //ejercicio 2)d)
    // int x,y,*punt_a,*punt_b;
    // punt_a=&x;
    // punt_b=&y;
    // puts("ingrese dos numeros enteros: ");
    // scanf("%d %d",&x,&y);
    // printf("el valor de las variables es x=%d y y=%d",x,y);
    // puts("\ninvirtiendo los valores...");
    // Invertir(punt_a,punt_b);
    // printf("\nel valor de las variables es x=%d y y=%d",x,y);

    //ejercicio 2)e)
    // int x,y,*punt_a,*punt_b;
    // punt_a=&x;
    // punt_b=&y;
    // puts("ingrese dos numeros enteros: ");
    // scanf("%d %d",&x,&y);
    // printf("\nel valor de las variables es x=%d y y=%d",x,y);
    // puts("\nordenando los valores...");
    // Orden(punt_a,punt_b);
    // printf("el valor de las variables de menor a mayor es x=%d y y=%d \n",x,y);
    
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

void Invertir(int *a,int *b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    
}

void Orden(int *a,int *b)
{
    int aux;
    aux=*a;
    if(aux>*b)
    {
        *a=*b;
        *b=aux;
    }
}