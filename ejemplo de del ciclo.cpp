#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ESCAPE_KEY 27

int main()
{
	printf("este programa es un ejemplo de del ciclo \n");
	while (getch() !=ESCAPE_KEY)
	{
		int w,v,suma;
		printf("introduzca un numero \t");
		scanf("%d",&v);
		suma=w+v;
		printf("El Valor Sumando es: %d",suma);
		getch();
	}
}
