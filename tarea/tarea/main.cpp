#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int Dias;
    printf("\n estes programa imprima el día correspondiente al numero digitado \n");
    scanf("%d", Dias);
    switch (Dias)

    {
        case 1:
            printf("\n El dia es domingo \n");
            break;
        case 2:
           printf("\n El dia es Lunes \n");
            break;
        case 3:
           printf("\n El dia  es Martes\n");
            break;
        case 4:
            printf("\n El dia  es Miercoles\n");
            break;
        case 5:
            printf("\n El dia es Jueves\n");
            break;
        case 6:
           printf("\n El dia  es Viernes\n");
            break;
        case 7:
            printf("\n El dia  es Sabado \n");
           
        default:
            printf("\n Ustedes inicia nigun valor correspondiente! \n");
            break;
    }
    return 0;
}
