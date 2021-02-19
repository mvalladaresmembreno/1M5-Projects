#include <stdio.h>
#include <conio.h>

int main()
{
    char oracion[30];
   char Mayus[30];
   int ConOracion;
   int ConMayus;
   textcolor(BLUE);
cprintf("**********************Detector de Mayusculas***********************************\n");
  cprintf("\nIngrese una oracion");
   scanf(" %[^\n]",oracion);
   ConMayus=0;
   ConOracion=0;
   while(oracion[ConOracion]!='\0')
	  {
		if((oracion[ConOracion]>='A' && oracion[ConOracion]<='Z') || oracion[ConOracion]=='Ñ')
	    {
       Mayus[ConMayus++]=oracion[ConOracion];
       Mayus[ConMayus]='\0';
	    }
	 ConOracion++;
	  }
	  textbackground(GREEN+BLACK);
	printf("las Mayusculas son: %s\n",Mayus);
	textcolor(YELLOW);
	printf("\nTADAAA uwu\n");
    system("PAUSE");

return 0;
}