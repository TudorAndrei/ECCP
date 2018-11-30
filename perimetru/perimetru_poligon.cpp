#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Point2D
{
    public:

    double x;
    double y;

};

double distanta(Point2D a, Point2D b)
{
    double dist = sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    return dist;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    Point2D puncte[n];
    int i;
    for( i = 0; i < n; i++)
    {
        cin>>puncte[i].x;
        cin>>puncte[i].y;
    }
    cout<<endl;
    double perimetru = 0;
    for(i = 0; i < n - 1; i++)
    {
        perimetru += distanta(puncte[i],puncte[i + 1]);
    }
    perimetru += distanta(puncte[n], puncte[0]);
    cout<<fixed<<setprecision(2)<<perimetru<<endl;
    return 0;
}
