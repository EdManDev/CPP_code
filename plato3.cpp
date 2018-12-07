#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int opt;
    int cantidad_platos;
    int res;

do   
{       
        printf("BIENVENIDO  EN EL MEJOR RESTORANTE DEL MUNDO: \n\n");
        printf("Opciones de tipos de plato: \n\n");
        
        printf("\n  opcion 1 = [Plato Del    Dia]: \n");
        printf("  opcion 2 = [Plato Del  Medio]: \n");
        printf("  opcion 3 = [Plato Del Fuerte]: \n\n\n");
        
        printf("Introducir la opcion del tipo de plato que prefieres:\n\n\n");
        
        scanf("%d",& opt);
        
        switch(opt)
        {
            case 1:
            {
                printf("\nfavor introducir cantidad a comprar[Plato Del Dia]:\n\n");

                scanf("%d",& cantidad_platos);

                if(cantidad_platos < 50)
                {
                    res = cantidad_platos * 100;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 100 pesos");
                    
                }
                
                if(cantidad_platos > 50 && cantidad_platos < 100)
                {
                    res = cantidad_platos * 75;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 75 pesos");
                }

                if(cantidad_platos > 100)
                {
                    res = cantidad_platos * 50;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 50 pesos");    
                }
                break;
            }   
            case 2:
            {
                printf("\n que cantidad desea comprar  [Plato Del  Medio]:\n\n");

                scanf("%d",& cantidad_platos);

                if(cantidad_platos < 50)
                {
                    res = cantidad_platos * 300;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 300 pesos");   
                }
                
                if(cantidad_platos > 50 && cantidad_platos <100 )
                {
                    res = cantidad_platos * 250;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 250 pesos");
                }
                
                
                
                if(cantidad_platos > 100)
                {
                    res = cantidad_platos * 200;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 200 pesos");
                }
                break;
            }  
            case 3:
            {
                printf("\n que cantidad desea comprar  [Plato Del Fuerte]:\n\n");

                scanf("%d",& cantidad_platos);

                if(cantidad_platos < 50)
                {
                    res = cantidad_platos * 500;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 500 pesos");
                    
                
                }
                
                if(cantidad_platos > 50 && cantidad_platos <100 )
                {
                    res = cantidad_platos * 400;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 400 pesos");
                    
                    
                
                }
                
                if(cantidad_platos > 100)
                {
                    res = cantidad_platos * 300;
                    printf("el total el pesos es de %d",res);
                    printf ("\n El plato costo 300 pesos");
                }
                break;
            }    
            default:
                printf(" Nigun opciones han sido selectionado! \n");
        }
}

while(opt !=0 );

printf("Sum = %d",res);

return 0;    

	
}
