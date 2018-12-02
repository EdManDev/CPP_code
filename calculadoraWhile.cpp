#include <iostream>
#include <string>

using namespace std;

int main()
{
    char signo;
    double num1, num2, counter = 0;
    do
    {

        cout << "Engrese Un Signo De Operador como: + o - o * o / : +, -, *,: ";
        cin >> signo;
        if (signo != 'Q')
        {
            cout << "Engrese Dos Numero: ";
            cin >> num1;
            cin >> num2;
            cin.ignore();
            if (num2 <= 0)
            {
                cout << "ERROR! DIVIDE BY ZERO!! ";
                cout << endl;
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
        cout << "the result is " << num1 << endl;

    } while (signo != 'Q');
    return (0);
}