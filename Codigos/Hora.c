#include<stdio.h>

void main(void)
{
    int hora, minutos,segundos;
    clrscr();

    printf("Ingrese en tres numeros una hora(cada numero separado por comas)\n");
    scanf("%d,%d,%d",&hora,&minutos,&segundos);

    if(hora<=23 && hora>=0)
    {
        if(minutos<=59 && minutos>=0)
        {

            if(segundos<=59 && segundos>=0)
            {
                printf("Hora correcta");
            }
            else
            {
                printf("Hora incorrecta");
            }
        }
        else
        {
            printf("Hora incorrecta");
        }
    }
    else
    {
        printf("Hora incorrecta");
    }
    getch();

}

