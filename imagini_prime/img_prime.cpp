#include <iostream>
using namespace std;
int isprime(int a){
    int i;
    if( a <= 1){
        return 0;
    }
    for( i = 2; i < a / 2 + 1; i++)
    {
        if(a%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int l,c;
    cin>>l>>c;
    int a[l * c];
    int i;
    // problema nu trebuie facuta neaparat cu matrici din moment ce numeri cate numere sunt neprime
    for(i = 0; i < l * c; i++)
        cin>>a[i];
    
    int counter = 0;

    for(i = 0; i < l * c; i++)
    {
       if(isprime(a[i]) == 0)
       counter++;
    }

   cout<<counter<<endl;
    return 0;
}
