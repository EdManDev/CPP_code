#include <stdio.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main() 
{
    char op;
    float num1, num2;
    
    printf("Engrese Un Signo De Operador como: + o - o * o / : \n\n");
    scanf("%d",op);

    printf("Engrese Los Numero Que Va Multiplicar: \n\n");
    
    scanf("%d",num1);
    scanf("%d",num2);
    
     switch(op)
    {
        case '+':
            printf("num1+num2 \n");
            break;
            
        case '-':
            printf("num1-num2 \n");
            break;
            
        case '*':
            printf("num1*num2 \n");
            break;
            
        case '/':
            printf("num1/num2 \n");
            break;
            
        default:
            printf("Error!  \n");
            break;
    }    
    return 0;
}
