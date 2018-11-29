#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int m=0, n=1, s=1, d=1;
    for (n=1; n<=10 ; n=n+1)
    {
        cout<<m<<endl;
        d=m+s;
        m=s;
        s=d;
    }
    return 0;
}
