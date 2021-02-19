#include <stdio.h>

void main(void)
{
    int v1,v2;
    clrscr();

    printf("Ingrese 2 numeros separados por un espacio y cambiaremos el orden\n");
    scanf("%d %d", &v1,&v2);
    
    printf("El primero es: %d\nEl segundo es: %d",v2,v1);
    
    getch();

}
