#include<conio.h>
#include<stdio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
main()
{
	int i=1, r=1, x,y;
	gotoxy(10,8); 
	printf("CUADRO EN PROGRAMATON C.");
	
	for(i=5;i<=60;i++)
	{
		gotoxy(i,10);
		printf("*");
		gotoxy(i,30);
		printf("*");		
	}
	for(r=10;r<30;r++)
	{
		gotoxy(5,r);
		printf("*");
		gotoxy(60,r);
		printf("*\n");
		
	}
	return 0;
}
