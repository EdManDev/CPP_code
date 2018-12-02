#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<>   

int main() 
{

    double num1,num2;
    char signo;

    printf("Enter an signo (+, -, *,): ");
    scanf("%c", &signo);

    printf("Enter two operands: ");
    scanf("%lf %lf",&num1, &num2);

    switch(signo)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
            break;

        default:
            printf("Error Hay Un Error!!!");
    }
    return 0;
}
