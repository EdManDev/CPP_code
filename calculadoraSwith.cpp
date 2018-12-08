#include <stdio.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main() 
{
    char signo;
    int num1, num2;
    
    printf("Engrese Un Signo De Operador como: + o - o * o / : \n\n");
    scanf("%c", &signo);

    printf("Engrese Los Numero Que Va Multiplicar: \n\n");
    scanf("%lf &lf", &num1, &num2);
    
     switch(signo)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;
            
        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;
            
        default:
            printf("Error!  \n");
            break;
    }

    while(2 >= 1):
    {
        
    }

    return 0;
}
