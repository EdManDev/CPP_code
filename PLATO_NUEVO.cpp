#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
    int cantidad_Platos, Opcion, res ;
 
    while (Opcion!=4)
    { 
        printf("\n\nBIENVENIDO  EN EL MEJOR RESTORANTE DEL MUNDO: \n\n");
        
        printf("Opciones de tipos de Plato: \n\n");
        
        printf("\n  Opcion 1 = [Plato Del    Dia]: \n");
        printf("  Opcion 2 = [Plato Del  Medio]: \n");
        printf("  Opcion 3 = [Plato Del Fuerte]: \n\n\n");
        printf("    Opcion 4 = SALIR!: \n\n\n");
        
        printf("\nIntroducir la Opcion del tipo de Plato que  prefieres:\n\n\n");

        if(Opcion!=5)
        { 
            printf("Introducir Una Opcion: \n");
            scanf("%d",& Opcion);
        }
        if(Opcion>=5)
        {
            printf("No Sepuede O Incorecta!");
            break;
        }
        if(Opcion== 1)
        {
            printf("\n[ Plato Del Dia]: A Sido Selectionado\n");
            printf("\n Introducir la Opcion del tipo de Plato\n\n");
            
            scanf("%d",& cantidad_Platos);
            if(cantidad_Platos<=50) 
            { 
                    printf("\n LA Cantidad De Platos Es Menor O Igual A 50 El Precio Es  $100\n");
                
                    res=cantidad_Platos*100;

                    printf(" El Precio Por Plato Es: $100 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);
            } 
            if(cantidad_Platos>50 && cantidad_Platos<100)
                { 
                    printf("LA Cantidad De PlatoS Mayor 50 Y Menor A 100 EL Precio Es  75\n");
                
                    res=cantidad_Platos*75;
                    printf(" El Precio Por Plato Es: $75 pesos\n\n");
                    printf(" El Total A Aagar Es:%d\n\n\n\n\n",res);
                }
            if(cantidad_Platos>100) 
                { 
                    printf("LA Cantidad De PlatoS Mayor A 100 el Precio es  50\n");
                
                    res=cantidad_Platos*50;

                    printf(" EL Precio Por Plato Es: $50 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);
                }
        }	
        if(Opcion== 2)
        {
            printf("\n[ Plato Del Medio]: A Sido Selectionado\n");
            printf("\n Introdusca La Cantidad De Plato: \n\n");
            
            scanf("%d",& cantidad_Platos);
            
            if(cantidad_Platos<=50)
                {   
                    printf("\n LA Cantidad De Plato Es Menor O Igual A 50 EL Precio Es  $200\n");
                
                    res=cantidad_Platos*200;
                    
                    printf(" EL Precio Por Plato Es: $200 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                }        
            if(cantidad_Platos>50 && cantidad_Platos<100) 
                { 
                    printf("LA Cantidad De Plato es Mayor A 50Y Menor A 100 EL Precio Es  $150\n");
                
                    res=cantidad_Platos*150;
                
                    printf(" EL Precio Por Plato Es: $150 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                } 
            if(cantidad_Platos >100)
                { printf("LA Cantidad De PlatoS Mayor A 100 EL Precio Es  $100\n");
                
                    res=cantidad_Platos*100;

                    printf(" EL Precio Por Plato Es: $100 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                }  
        }	
        if(Opcion== 3)
        {
            printf("\n[ Plato Del Fuerte ]: A Sido Selectionado\n");
            printf("\n Introduzca La Cantidad De Plato: \n\n");
            
            scanf("%d",& cantidad_Platos);
            if(cantidad_Platos<=50)
                {  
                    printf("\n LA Cantidad De PlatoS es Menor O Igual A 50 EL Precio Es $500\n");
                    
                    res=cantidad_Platos*500;
            
                    printf(" EL Precio Por Plato Es: $500 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                }
            if(cantidad_Platos>50 && cantidad_Platos<100)
                {   printf("LA Cantidad De PlatoS Mayor A 50 Y Menor A 100 EL Precio Es $375\n");
                    
                    res=cantidad_Platos*375;
                    printf(" EL Precio Por Plato Es: $375 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                }
            if(cantidad_Platos > 100)
                {   printf("LA Cantidad De PlatoS Mayor A 100 EL Precio Es $250\n");
            
                    res=cantidad_Platos*250;
                    printf(" EL Precio Por Plato Es: $250 pesos\n\n");
                    printf(" El total a pagar es: %d\n\n\n\n\n",res);  
                }    
        }					
    }
}