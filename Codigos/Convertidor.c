#include <stdio.h>

void main(void)
{
    float cm, kg,valorpg,valorkg,transpg,transkg;
    int respuesta;
    clrscr();
    valorpg=2.54;
    valorkg=2.2046;

    printf("Que desea hacer?\n");
    printf("1)Transformar de cm a pulgadas\n 2)Transformar de libras a kg\n 3)Ambas cosas\n");
    scanf("%d", &respuesta);

    switch (respuesta)
    {
        case 1:
        printf("Ingrese los cm que desee transformar a pulgadas\n");
        scanf("%f",&cm);
        transpg=cm/valorpg;
        printf("La respuesta es: %.2f pulgadas", transpg);
        break;

        case 2:
        printf("Ingrese las libras que desee transformar a kg\n");
        scanf("%f",&kg);
        transkg=kg/valorkg;
        printf("La respuesta es: %.2f kg", transkg);
        break;

        case 3:
        printf("Ingrese los cm que desee transformar a pulgadas\n");
        scanf("%f",&cm);
        printf("Ingrese las libras que desee transformar a kg\n");
        scanf("%f",&kg);
        transpg=cm/valorpg;
        transkg=kg/valorkg;
        printf("La respuesta es: %.2f pulgadas y %.2f kg",transpg,transkg);
        break;
    }
    getch();
}
