# include <stdio.h>
#include<iostream>

using namespace std;

int main() 
{
    char op;
    float num1, num2;
    
    printf("Engrese un signo de Operador como: + o - o * o / : \n\n");
    
    printf("Engrese los numero que va multiplicar: \n\n");

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