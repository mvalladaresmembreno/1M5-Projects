#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int i,j;
	int sumatoria;
	int matriz[10][10];
	int Suma[10];
	int k=0;
	system("cls");
	textcolor(BLUE);
	gotoxy(20,5);
	cprintf("WELCOME\n");
	gotoxy(20,6);
	printf(" Se mostraran 100 numeros de izquierda a derecha\n");
	gotoxy(20,7);
	printf("Disfrute :D");
	textcolor(GREEN);
	gotoxy(20,8);
	printf("Espere un momento");
	gotoxy(20,9);
	delay(1000);
	printf(".");
	gotoxy(20,10);
	delay(1000);
	printf(".");
	gotoxy(20,11);
	delay(1000);
	printf(".");
	gotoxy(20,12);
	system("cls");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			k=k+1;
			matriz[i][j]=k;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d  ", matriz[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<10;i++){
    sumatoria =0;
    for (j=0;j<10;j++){
	sumatoria += matriz[i][j];
    }
	Suma[j] = sumatoria;
}
    for(i=0;i<10;i++) {
		printf("%d ", Suma[j]);
    }
getch();
}