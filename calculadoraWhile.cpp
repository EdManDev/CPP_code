#include <iostream>
#include <string>

using namespace std;

int main()
{
    char signo;
    double num1, num2, counter = 0;
    do
    {
        printf("Engrese Un Signo De Operador como: + o - o * o / : +, -, *,: ");
        scanf("%c", &signo);
        if (signo != 'Q')
        {
            printf( "Engrese Dos Numero: "
            scanf("%lf &lf", &num1, &num2);

            cin.ignore();
            if (num2 <= 0)
            {
                printf("ERROR! DIVIDE BY ZERO!! ");
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
        printf("the result is %d", num1);

    } while (signo != 'Q');
    return (0);
}