#include <iostream>
#include <string>
// #include<conio.h>
#include<math.h>
#include<stdio.h>

// using namespace std;

int main()
{
    char signo;
    double num1, num2, counter = 0;
    {
        printf("Engrese Un Signo De Operador como: + o - o * o / : +, -, *,: ");
        scanf("%c", &signo);

        if (signo != 'Q')
        {
            printf("Engrese Dos Numero: ");
            scanf("%lf %lf",&num1, &num2);

            // cin.ignore();
            if (num2 <= 0)
            {
                printf("Hay un error! para dividir por cero!! ");
            }
            else
            {
                if (signo == '+')
                {
                    num1 += num2;
                }
                else
                {
                    if (signo == '-')
                    {
                        num1 -= num2;
                    }
                    else
                    {
                        if (signo == '*')
                        {
                            num1 *= num2;
                        }
                        else
                        {
                            if ((signo == '/') && (num2 != 0))
                            {
                                num1 /= num2;
                            }
                        }
                    }
                }
            }
        }
        printf("El resultado esta: %lf",num1);
    } 	while (signo != 'Q' && signo != 'q');
    printf("",);


    return (0);
}
