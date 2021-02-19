#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
int j = 0, i = 0;
	char frase[80];
	clrscr();
	printf("Este programa encripta una cadena \n");
	printf("Ingrese un texto: ");
	for ( j = 0; j < 1; j++)
	{
		gets(frase);
	}

    for (i = 0; i <= strlen( frase ); i++)
	{
        if (islower(frase [i] ) )
        {
			frase[i] = ( frase[i] - 97 + 2 ) % 26 + 97;
		}
        else if (isupper(frase[i]))
        {
            frase[i] = ( frase[i] - 65 + 2 ) % 26 + 65;
        }
        else
        {
            frase[i] = frase[i];
        }
    }
	printf("El texto cifrado es: %s", frase);
    printf("\n\n\n");

system("pause");
return 0;
}