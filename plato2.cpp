#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;

#25+75=100
#125+75=100
#425+75=100

int main()
{
	int cantitad_precio,  plato=1 , opci=100 ;
	
	printf("Bienvenido a este programa: \n");
    printf("introducir el precio de plato: ");
     
    scanf("%d",& cantitad_precio);
    
    cantitad_precio=plato+75;
    
	if(25 < cantitad_precio)
	{
		printf("los plato de la opcio 100 es: %d.\n", cantitad_precio);
	}
	else
		printf("el precio no es suficiente para la opcion de 100");


	return 0;
	
}

