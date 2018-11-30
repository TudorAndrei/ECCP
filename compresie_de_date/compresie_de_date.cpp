#include <iostream>
#include <string>
#include <string.h>
using  namespace std;
struct temp{
    // salvam fiecare linie 
    char x[100];
    int len;
}a[100];

int main(int argc, char const *argv[])
{
    int n; // nr de linii care trebuiesc citite
    cin>>n;
    int i;
    int a[100];
    int j;
    for(i = 0; i < n; i++)
    {
        getline(cin, newline);
        char *p;
        p = strtok(newline, ',');
        while(p)
        {
            a[j] = p;
            j++;
            p = strtok(',', NULL);
        }

    }


    return 0;
}
