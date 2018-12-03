#include <iostream>
#include <string>
#include <vector>
using namespace std; 

int main(int argc, char const *argv[])
{
    string sentence;
    getline(cin,sentence);
    int n;
    cin>>n;
    vector<int> nr(n);
    int i;
    for (i = 0; i < n; i++){
        cin>>nr[i];
    }
    int sym = 0;
    for(i = 0; i < sentence.length(); i++)
    {
       if(sentence[i] >= 'a' && sentence[i] <= 'z')
       {
           if(i > n)
            sentence[i] += nr[n % (n -i + 1)];
            else
            sentence[i] += nr[n % (i + 1)];
        if(sentence[i] > 'z')
            sentence[i] = sentence[i] - 'z' + 'a' - 1;
        } else
        if(sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i] += nr[n % (i + 1)];
            if(sentence[i] > 'Z')
              sentence[i] = sentence[i] - 'z' + 'A' - 1 ;
        }
       if(isalpha(sentence[i]) == 0)
        sym++;
    }
    for(i = 0; i < sentence.size(); i++)
    {
        cout<<sentence[i];
    }
    cout<<endl;
    return 0;
}
