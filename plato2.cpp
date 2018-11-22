#include <iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>

using namespace std;


int main()
{
	int cantitad_platos,  plato=1 , opci=100, opt, res ;
	
	printf("Bienvenido a este programa: \n\n");
	printf("opciones de tipos de plato:\n\n\n ");
		printf("opcion 1 = plato del dia:\n");
			printf("opcion 2 = plato Medio:\n ");
			printf("opcion 3 = plato fuerte: \n\n\n");
				
    printf("introducir la opcion del tipo de plato que prefieres: ");
     
    scanf("%d",& opt);
    
	if(opt== 1)
	{
		printf(" la cantidad de platos menor o igual a 50 el precio es  100\n");
			printf(" la cantidad de platos mayor a 50 y menor a 101 el precio es  75\n");
			printf(" la cantidad de platos mayor a 100 el precio es  50\n");
		
		printf("Introduzca la Cantidad de platos a comprar\n\n\n");
		
		scanf("%d",& cantitad_platos);
		if(cantitad_platos<=50)			
	{
		res=cantitad_platos*100;
			printf("El precio por plato es: 100 pesos\n\n");
		    printf("El precio total a pagar es:%d",res);
		
		}	
	}
	//else
	//	printf("el precio no es suficiente para la opcion de 100");
	return 0;
}


