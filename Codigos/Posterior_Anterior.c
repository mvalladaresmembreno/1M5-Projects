#include<stdio.h>

void main (void)
{
    int x,anterior,posterior;
    clrscr();

    printf("Ingrese un numero entero y mostraremos el numero anterior y posterior\n");
    scanf("%d", &x);
    
    anterior=x-1;
    posterior=x+1;

    printf("Aqui tiene el orden, anterior, el numero ingresado y posterior: %d, %d, %d", anterior,x,posterior);

    getch();
}
