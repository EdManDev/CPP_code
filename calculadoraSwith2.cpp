#include <stdio.h>
#include<conio.h>
#include<math.h>    

int main() 
{

    double num1,num2;
    char op;

    printf("Enter an op (+, -, *,): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf",&num1, &num2);

    switch(op)
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

        // op doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! op is not correct");
    }
    return 0;
}
