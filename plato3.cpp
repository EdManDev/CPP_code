#include <iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>

int main()
{
    int opt;
    int cantitad_platos;
    int res;
    
    printf("BIENVENIDO  EN EL MEJOR RESTORANTE DEL MUNDO : \n\n");
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
            printf("\nAhora Introducir un precio, lo que tu quiere  [Plato Del Dia]:\n\n");

            printf("\n    -la cantidad de platos: menor o igual a 50 el precio es       = 100 DOP\n");
            //printf("    -la cantidad de platos: mayor a 50 y menor a 101 el precio es = 75 DOP\n");
            //printf("    -la cantidad de platos: mayor a 100 el precio es              = 50 DOP\n");
            
            printf("\nIntroduzca la Cantidad de platos a comprar\n\n\n");
            
            scanf("%d",& cantitad_platos);
            if(cantitad_platos < 100)
            {
                res = cantitad_platos - 100;
                printf("\nEl precio por plato es: 100 pesos\n");
                printf("Lo Que Te Falta es: %d\n\n",res);
            }
            else{
                printf("Ok Gracias por su compra  \n");
            }
            break;
        }   
        case 2:
        {
            printf("\nAhora Introducir un precio, lo que tu quiere  [Plato Del  Medio]:\n\n");

            // printf("\n    -la cantidad de platos: menor o igual a 50 el precio es       = 100 DOP\n");
            printf("    -la cantidad de platos: mayor a 50 y menor a 101 el precio es = 75 DOP\n");
            printf("    -la cantidad de platos: mayor a 100 el precio es              = 50 DOP\n");
            
            printf("\nIntroduzca la Cantidad de platos a comprar\n\n\n");
            
            scanf("%d",& cantitad_platos);
            if(cantitad_platos < 200)
            {
                res = cantitad_platos - 200;
                printf("\nEl precio por plato es: 200 pesos\n");
                printf("Lo Que Te Falta es: %d\n\n",res);
            }
            else{
                printf("Ok Gracias por su compra  \n");
            }
            break;
        }  
        case 3:
        {
            printf("\nAhora Introducir un precio, lo que tu quiere  [Plato Del Fuerte]:\n\n");

            // printf("\n    -la cantidad de platos: menor o igual a 50 el precio es       = 100 DOP\n");
            // //printf("    -la cantidad de platos: mayor a 50 y menor a 101 el precio es = 75 DOP\n");
            printf("    -la cantidad de platos: mayor a 100 el precio es              = 50 DOP\n");

            printf("\nIntroduzca la Cantidad de platos a comprar\n\n\n");
            
            scanf("%d",& cantitad_platos);
            if(cantitad_platos < 500)
            {
                res = cantitad_platos - 500;
                printf("\nEl precio por plato es: 500 pesos\n");
                printf("Lo Que Te Falta es: %d\n\n",res);
            }
            else{
                printf("Ok Gracias por su compra  \n");
            }
            break;
        }    
        default:
            printf(" Nigun opciones han sido selectionado! \n");
    }
    return 0;
}
