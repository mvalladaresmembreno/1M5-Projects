#include<stdio.h>
#include<math.h>

void main (void)
{
    int eleccion; 
    float operacion,x;
    clrscr();
    printf("Buenas, en que puedo ayudarlo?(escoja con un numero entero)\n1)Calcular el doble de un numero entero.\n2)Calcular la mitad de un numero entero.\n3)Calcular el cuadrado de un numero entero.\n4)Salir.\n");
    scanf("%d",&eleccion);

    switch (eleccion)
    {
        case 1:
        printf("Ingrese el numero que desea doblar\n");
        scanf("%f",&x);
        operacion=x*2;
        printf("La respuesta es: %.0f",operacion);
        break;

        case 2:
        printf("Ingrese el numero que desea saber su mitad\n");
        scanf("%f",&x);
        operacion=x/2;
        printf("La respuesta es: %.1f",operacion);
        break;

        case 3:
        printf("Ingrese el numero que desea llevar al cuadrado\n");
        scanf("%f",&x);
        operacion=pow(x,2);
        printf("La respuesta es: %.0f",operacion);
        break;

        case 4:
        printf("Bueno un gusto pase buen dia");
        break;
        
        default:
        printf("Si se muestra este mensaje es porque ingreso un numero que no estaba entre las opciones o ingreso una letra, respete el codigo pls");
        break;
    }
    getch();
}
