//***************************************************************
//      Programa para actualizar compras
//***************************************************************
#include <stdio.h>

void MenuCompras();
void Actualizar();
void Consultar();

int Codigo;
int Cantidad;
float Precio;

void MenuCompras()
{
	int opc;

    do 
    {
    	printf("\n\n\tMenu Compras");
        printf("\n1- Actualizar.");
        printf("\n2- Consultar.");
        printf("\n3- Finalizar.");
        printf("\n\nLeer opcion: ");
		    
        scanf("%d", &opc);
            
        if(opc == 1) Actualizar();
        if(opc == 2) Consultar();
            
    }while(opc != 3);
}
//--------------------------------------------------------------------------    
void Actualizar()
{
        printf("\tCompras");
        printf("\n\nCodigo:");
        scanf("%d", &Codigo);
		
        if(Codigo == 0)
        	return;

		do{
			printf("\nCantidad: ");
        	scanf("%d", &Cantidad);
        	
        	if(Cantidad <= 0)
        		printf("\nLa cantidad debe ser mayor que cero.");
		}while(Cantidad <= 0);

		do{
			printf("\nPrecio: ");
        	scanf("%f", &Precio);
        	
        	if(Precio <= 0)
        		printf("\nEl precio debe ser mayor que cero.");
        }while(Precio <= 0);
}
//----------------------------------------------------------------------------
void Consultar()
{
 	printf("\tConsulta Compras\n");
	printf("\nCodigo: %d", Codigo);
	printf("\nCantidad %d", Cantidad);
	printf("\nPrecio %f\n", Precio);
	
}

