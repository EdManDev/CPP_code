#include <iostream>
using namespace std;

int main()
{
    int a = 100,
        b = 89,
        c = 79,
        d = 74,
        f = 69;

    printf("este programa va imprima la letra equivalente a la calificación: \n");
    scanf("%d", &a);
    if(a >= 100)
        printf("%d Si La calificación A esta calificado \n", a);
    else
        printf("%d No la calificacion no esta calificado  \n", a);
    
    
    cout <<"este programa va imprima la letra equivalente a la calificación:  \n";
   scanf("%d", &b);
    if(b >= 89)
        printf("%d Si La calificación B esta calificado \n", b);
    else
        printf("%d No la calificacion no esta calificado \n", b);
    return 0;
}
