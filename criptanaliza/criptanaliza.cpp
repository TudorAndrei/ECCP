#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int isprime(int nr);
int main()
{
    int n,k;
    cin>>n>>k;
    string line;
    getline(cin,line);
    unsigned int a[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int prime_cnt = 0;
    for (i = 0; i < n; i++)
    {
        if(isprime(a[i]) == 1)
        {
            prime_cnt++;
        }
    }

    unsigned int primes[prime_cnt];
    int j = 0;
    for(i = 0; i < n; i++)
    {
        if(isprime(a[i]) == 1)
            if(a[i] >= k)
            {
                primes[j] = a[i];
                j++;
            }
    }
    sort(primes, primes + prime_cnt);
    if ( j == 0)
        cout<<-1<<endl;
    else
        cout<<primes[2]<<endl;

    return 0;
}

int isprime(int nr)
{
    int prime = 1;
    if(nr <= 1)
    {
        prime = 0;
    }
    int i;
    for(i = 2; i <= nr/2; i++)
    {
        if(nr%i == 0)
        {
            prime = 0;
            break;
        }
    }

    return prime;
}