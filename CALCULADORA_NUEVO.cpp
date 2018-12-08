#include <iostream>
#include <string>
#include<conio.h>
#include<math.h>
#include<stdio.h>

int main()
{
    char signo;
    int num1, num2;

    printf("Engrese Un Signo De Operador como: + o - o * o / : +, -, *,: ");
    scanf("%c", &signo);

    while(signo!=0)
    {
        printf("\n\nEngrese Dos Numero: ");
        scanf("%d %d",&num1, &num2);

        switch(signo)
        {
            case '+':
                printf("%d + %d = %d",num1, num2, num1 + num2);
                break;

            case '-':
                printf("%d - %d = %d",num1, num2, num1 - num2);
                break;

            case '*':
                printf("%d * %d = %d",num1, num2, num1 * num2);
                break;

            case '/':
                printf("%d / %d = %d",num1, num2, num1 / num2);
                break;
            default:
                printf("Error! No Se Puede");
        }
    }      
}  
    