#include <stdio.h>
#include <conio.h>
#include <math.h>

void main (void)
{
	float promedios[3], i;
	float suma,notaf,ordenadito,a;
	suma = 0;
	clrscr(); 
	printf("Este programa saca tu promedio y de paso los ordena de mayor a menor :D\n");
	printf("Ingrese sus promedios\n", i+1);
		if (promedios[i]<0)
		{
			do
			{
				printf("Numeros postivos plox\n");
				scanf("%f", &promedios[i]);
			}
			while (promedios[i]<0);
			
		}
		if (promedios[i]>100)
		{
			do 
			{
			  printf("wey yaaaaaa, sea serio\n");
				scanf("%f", &promedios[i]);
			}
			while (promedios [i]>100);
		}
	for (i=0; i<=2; i++)
	{
		scanf("%f", &promedios[i]);
	
		suma += promedios[i];
	}
	notaf=suma/3;
	 for (i = 0; i < 3; i++)
        {
            for (a = i+1; a < 3; a++)
            {
                if (promedios[i]<promedios[a])
                {
                    ordenadito=promedios[i];
                    promedios[i]=promedios[a];
                    promedios[a]=ordenadito;
                }
           
		   }
        }

    printf("El promedio es: %.2f\n",notaf);
	printf("\nEl orden de los promedios es:\n");

		for (i = 0; i < 3; i++)
        {
            printf("%.2f ",promedios[i]);
        }
getch();
}