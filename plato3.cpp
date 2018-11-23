#include <iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int opt, cantitad_platos, res ;
    
    printf("BIENVENIDO A ESTE PROGRAMA: \n\n");
    printf("Opciones de tipos de plato: \n\n\n");
    
    printf("\n  opcion 1 = plato del Dia: \n");
    printf("  opcion 2 = plato Medio: \n");
    printf("  opcion 3 = plato fuerte: \n\n\n");
    
    printf("Introducir la opcion del tipo de plato que prefieres: \n");
    
    scanf("%d",& opt);
    
    switch(opt)
    {
        case 1:
            printf("\n Ahora seleciona en la lista de plato del Dia:\n");

            printf("\n    la cantidad de platos menor o igual a 50 el precio es  100\n");
            printf("    la cantidad de platos mayor a 50 y menor a 101 el precio es  75\n");
            printf("    la cantidad de platos mayor a 100 el precio es  50\n");
            
            printf("\nIntroduzca la Cantidad de platos a comprar\n\n\n");
            
            scanf("%d",& cantitad_platos);
            if(cantitad_platos<=50)
            {
                res=cantitad_platos*100;
                printf("\nEl precio por plato es: 100 pesos\n");
                printf("El precio total a pagar es: %d\n\n",res);
            }
            break;
            
        case 2:
            printf("empty");
            break;
            
        case 3:
            printf("empty");
            break;
            
        default:
            printf(" Nigun opciones han sido selectionado ");
    }
    return 0;
}
