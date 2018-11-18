
#include<stdio.h>
#include<math.h>
#include<conio.h>

main()
{
      char nombre[30];
      int cant,total;
      float precio,devuelta, efectivo;
      printf ("Programa de facturacion \n");
      fgets(nombre,30,stdin);
      printf ("Introduzca el precio del producto\n");
      scanf ("%f",&precio);               
      printf ("Introduzca la cantidad  del producto\n");
      scanf ("%d",&cant);   
      total = cant* precio;
        printf ("El valor a pagar es: %d \n",total);
        printf("Efectivo entregado: "); 
            scanf("%f",&efectivo);
            do{
                      if(efectivo>=total) 
                      {
                            devuelta= efectivo-total;
                            printf ("Cantidad a devolver: %f \n",devuelta); 
                             printf ("Gracias por su compra \n");             
                                          }       
                                          else
                                          {
                                              printf ("Monto insuficiente...Por favor introducir un valor mayor a: %d \n",total);
                                              printf("Efectivo entregado: "); 
                                              scanf ("%f",&efectivo);  
                                              devuelta= efectivo-total;
                                                printf ("Cantidad a devolver: %d \n",devuelta); 
                                              printf ("Gracias por su compra \n");
                                              
                                              }   
                                 
                                 
                                 } while (efectivo<total);  
                                 getch();         
                        }
