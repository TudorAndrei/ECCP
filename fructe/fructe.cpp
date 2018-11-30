#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Fructe{
    public:
    int tip_fruct;
    int masa;
    int r,g,b;

    Fructe(int t,int m, int r, int g, int b)
    {
        tip_fruct = t;
        masa = m;
        r = r;
        g = g;
        b = b;
    }
    Fructe(){}
};

int main(int argc, char const *argv[])
{
    (void)argc;

    int n,k,mc,rc,gc,bc;
    int t,m,r,g,b;
    cin>>n>>k>>mc>>rc>>gc>>bc;
    Fructe DB[n];
    int i;
    //savam fructele din baza de date
    for(i = 0; i < n; i++)
    {
        cin>>t>>m>>r>>g>>b;
        DB[i].tip_fruct = t;
        DB[i].masa = m;
        DB[i].r = r;
        DB[i].g = g;
        DB[i].b = b;
    }
    //calculam fiecare distanta in parte
    double distanta[n];
    for(i = 0; i < n; i++)
    {
        m = (mc - DB[i].masa) * (mc - DB[i].masa);
        r = (rc - DB[i].r) * (rc - DB[i].r);
        g = (gc - DB[i].g) * (gc - DB[i].g);
        b = (bc - DB[i].b) * (bc - DB[i].b);
        distanta[i] = sqrt(m + r + g + b);
    }
    int min = distanta[0];
    for (i = 1; i < n; i++)
    {
        if(min > distanta[i])
            min = distanta[i];
    }
 
    cout<<DB[min].tip_fruct<<endl;
    return (0);
}