//***************************************************************
//      Menú de procesos
//***************************************************************

#include <stdio.h>
#include "proced01.h"  // Permite a este programa ejecutar los procesos que
					   // se encuentran dentro de proced01.h
main()
{
	int opc;
		
	do
	{
		printf("\n\n\tMenu General");
        printf("\n\n1- Libros.");
        printf("\n2- Autores.");
        printf("\n\nLeer opcion: ");
            
        scanf("%d",&opc);
            
        if(opc == 1) MenuCompras();
            
    }while(opc != 2);
}
