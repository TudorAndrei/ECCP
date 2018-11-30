#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int m, n;
    char alpha, beta;
    char  s[5001];
    char *p;
    string newline;
    int plen;
    int out1 = 0,out2= 0 ,out3 = 0;


    cin>>alpha>>beta>>m>>n;
    getline(cin, newline);
    

    cin.get(s,5001);
    int slen = strlen(s);

    for (int i = 0; i < slen; ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
           s[i] += 32;
        }
    }

    if (alpha >= 'A' && alpha <= 'Z')
    {
        alpha = alpha + 32;
    }

    if (beta >= 'A' && beta<= 'Z')
    {
        beta = beta + 32;
    }

    

    p = strtok(s, " ");
    while(p)
    {
        plen = strlen(p);
        if (p[0] == alpha && p[plen - 1] == beta)
        {
            if (plen < m)
            {
                out1++;
            }
            else if(plen < n && plen >= m)
            {
                out2++;
            }
            else if(plen >= n)
            {
                out3++;
            }
        }
        p = strtok(NULL, " ");
    }
    cout<<out1<<" "<<out2<<" "<<out3;
    return (0);
}
