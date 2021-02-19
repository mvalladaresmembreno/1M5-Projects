#include <stdio.h>

void main (void)
{
    int x, y, z;
    clrscr();
    printf("Ingrese dos numeros separados por una coma\n");
    scanf("%d,%d", &x,&y);
    z=x-y;


    if (z<=10)
    {
        switch (z)
        {
            case 1:
            printf("0,1");
            break;

            case 2:
            printf("0,1,2");
            break;

            case 3:
            printf("0,1,2,3");
            break;

            case 4:
            printf("0,1,2,3,4");
            break;

            case 5:
            printf("0,1,2,3,4,5");
            break;

            case 6:
            printf("0,1,2,3,4,5,6");
            break;

            case 7:
            printf("0,1,2,3,4,5,6,7");
            break;

            case 8:
            printf("0,1,2,3,4,5,6,7,8");
            break;

            case 9:
            printf("0,1,2,3,4,5,6,7,8,9");
            break;

            case 10:
            printf("0,1,2,1,3,4,5,6,7,8,9,10");
            break;
        }

    }
    else
    {
        printf("Disculpe no llegamos a esos valores");
    }
    getch();
}
