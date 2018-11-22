#include <iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int cantitad,  plato=1 , opci=100;
	
    printf("introducir el precio: \n");
    
    scanf(" %d ",& cantitad);
    
	if(50 < cantitad)
	{
		cantitad=plato*75;
		printf("los plato de la opcio 100 es: %d.\n", cantitad);
	}
	else
		printf("No el precio no es suficiente");

	return 0;
	
}

