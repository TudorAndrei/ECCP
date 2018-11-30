#include <iostream>
using namespace std;

long double factorial(long double n)
{
    if (n > 1)
     return n * factorial(n - 1);
    else
        return 1;
}


int main()
{
    long double m; // aranjamente
    long double k; // 
    long double n;
    long double aran = 0;

    cin>>k>>m;
    n = k;

    aran = factorial(n)/factorial(n - k);   
    if (aran > m)
    {
        n = 1;
    }
    else 
    while(aran < m)
    {
        aran = (long double)(factorial(n)/factorial(n - k));   
        n++;
    }
    n--;
    cout<<n<<endl;
    return (0);
}
