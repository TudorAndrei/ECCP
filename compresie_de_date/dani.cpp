#include <iostream>
#include <string>
using  namespace std;
struct prop{
	string s;
	
}a[100];

int main(int argc, char const *argv[])
{
    int n; // nr de linii care trebuiesc citite
    cin>>n;
    int i;
    char x;
    for(i = 0; i <= n; i++)
    getline(cin,a[i].s);

    for(i = 0; i <= n ; i++)
    {
        cout<<a[i].s<<endl;
    }

    return 0;
}
