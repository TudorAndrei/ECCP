#include <iostream>
#include <ctype.h>
using namespace std;

uint32_t aranjamente(uint32_t n, uint32_t k);

uint32_t factorial(uint32_t e);

long double combinari(uint32_t c, uint32_t d);

int main()
{
    //n = nr claselor de rezistoare
    //k = o selectie de rezistoare din nr total de clase
    //m = nr de combinari = (n!)/( k! * (n - k)!)
    // uint32_t = unsigned int de 32 de biti
    uint32_t n,m,k;
    // combinarri de n luate cate k = aranj de n luate cate k / k!
    cin>>n;
    cin>>m;
    k = 0;
    long double comb;
    comb = combinari(n,k);
    if(comb > m){
        cout<<'0'<<endl;
        return 0;
    }
    while( comb < m){
        
        k++;
        comb = combinari(n,k);
        cout<<comb<<endl;
    }
    k--;
    cout<<k<<endl;
    return 0;
}

long double combinari(uint32_t c, uint32_t d){
    long double result = 0;

    result = (long double)aranjamente(c, d)/factorial(d);
    return result;
}


uint32_t factorial(uint32_t e){
    if( e > 1)
    return e * factorial(e - 1);
    else
    return 1;
}

uint32_t aranjamente(uint32_t n, uint32_t k){
    uint32_t product = 0;
    int i = 0;

    for(int i = n-k + 1; i <= n; i ++ )
    {
        product *= i;
    }
    return product;
}