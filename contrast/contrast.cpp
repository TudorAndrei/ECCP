#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    int imagine[row][col];
    int filtru[row][col];
    int diferente[row][col];

    int i= 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            cin>>imagine[i][j];
    }

    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            filtru[i][j] = floor(imagine[i][j] * 0.9 + 2);
    }

     for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            diferente[i][j] = filtru[i][j] - imagine[i][j];
    }
    int suma = 0;
    int nr_cifre = row * col;

    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            suma += diferente[i][j];
    }
    float result = suma/nr_cifre;
    cout<<fixed<<setprecision(2)<<result<<endl;

    //afisari
    /*
    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            cout<<imagine[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            cout<<filtru[i][j]<<"\t";
        cout<<endl;
    }
     cout<<endl;
    for (i = 0; i < row; i++)
    {
        for( j = 0; j < col; j++)
            cout<<diferente[i][j]<<"\t";
        cout<<endl;
    }*/
    return 0;
}