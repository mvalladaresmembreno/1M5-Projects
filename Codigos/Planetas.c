#include <stdio.h>

void main(void)
{
    int x;
    clrscr();

    printf("Ingrese un numero para ver cualquiera de los siguientes planetas y la distancia que tienen con el sol en millones de kilometros\n");
    printf("1)Mercurio 2)Venus 3)Tierra \n4)Marte 5)Jupiter 6)Saturno\n7)Urano 8)Neptuno 9)Pluton\n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
        printf("La distancia entre Mercurio y el sol en millones de kilometros es de 59");
        break;

        case 2:
        printf("La distancia entre Venus y el sol en millones de kilometros es de 108");
        break;

        case 3:
        printf("La distancia entre la Tierra y el sol en millones de kilometros es de 150");
        break;

        case 4:
        printf("La distancia entre Marte y el sol en millones de kilometros es de 228");
        break;

        case 5:
        printf("La distancia entre Jupiter y el sol en millones de kilometros es de 750");
        break;

        case 6:
        printf("La distancia entre Saturno y el sol en millones de kilometros es de 1431");
        break;

        case 7:
        printf("La distancia entre Urano y el sol en millones de kilometros es de 2877");
        break;

        case 8:
        printf("La distancia entre Neptuno y el sol en millones de kilometros es de 4509");
        break;

        case 9:
        printf("La distancia entre Pluton y el sol en millones de kilometros es de 5916");
        break;

        default:
        printf("ERROR: %d no esta asociado a ningun planeta", x);
        break;
    }
    getch();

}
