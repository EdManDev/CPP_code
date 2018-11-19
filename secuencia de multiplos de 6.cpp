#include <iostream>

using namespace std;

int main()
{
    int n=90;
    for(int i=1; i <= n; ++i)
    {
        if(i % 6 == 0)
        cout << i << ' ';
    }
    return 0;
}
