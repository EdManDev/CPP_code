#include <iostream>
#include <string>
<<<<<<< HEAD
#include<conio.h>
=======
// #include<conio.h>
>>>>>>> 44e688a50f2b9d0d1c379c559118c7df599b3a46
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

        if (signo) //!= 'Q'//)
        {
            printf("Engrese Dos Numero: ");
            scanf("%lf %lf",&num1, &num2);

<<<<<<< HEAD
            cin.ignore();
=======
            // cin.ignore();
>>>>>>> 44e688a50f2b9d0d1c379c559118c7df599b3a46
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
        printf("El resultado esta: %lf",num1);
    } 
    // while (signo != 'Q' && signo != 'q');
    
    return (0);
}
