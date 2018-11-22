#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int cantitad_precio,  plato=1 , opci=100;
	
	printf("Bienvenido a este programa: \n");
    printf("introducir el precio de plato: ");
     
    scanf(" %d ",& cantitad_precio);
    
	if(50 < cantitad_precio)
	{
		cantitad_precio=plato*75;
		printf("los plato de la opcio 100 es: %d.\n", cantitad_precio);
	}
	else
		printf("el precio no es suficiente para la opcion de 100");

	return 0;
	
}

