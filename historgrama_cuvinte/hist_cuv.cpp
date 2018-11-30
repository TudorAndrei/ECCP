#include <iostream>
#include <vector>
#include <sstream>
#include <utility>
#include <string.h>
#include <string>
#include <algorithm>
using namespace std;
struct Comp {
  bool operator()(const pair<string, int> &a, const pair<string, int> &b) {
    if (a.second != b.second) {
      return a.second > b.second;
    }
    return a.first > b.first;
  }

};

int main(int argc, char const *argv[])
{
    string input;
    getline(cin,input);
    string found;
    vector<string> cuvinte;
    int i;
    int j;
    stringstream ss(input);

    while(ss >> found)
    {
        cuvinte.push_back(found);
    }

    int count = cuvinte.size();

    vector<pair<string, int>> perechi(count);

    for(i = 0; i < count; i++){
        perechi[i].first = cuvinte[i];
        perechi[i].second = 1;
    }

    /*for(i = 0; i < perechi.size(); i++)
    {
        for(j = 0; j < perechi[i].first.size(); j++){
            if(perechi[i].first[j] >= 'A' && perechi[i].first[j] <= 'Z'){
                perechi[i].first[j] += 32;
            }
        }
    }*/

    int k = count;
    while (k){
        for( j = 0 ; j < perechi.size(); j++)
            for( i = 0; i < perechi.size() - 1;i++){   
                if(perechi[i].first == perechi[j].first && i != j){
                    perechi[i].second++;
                    perechi.erase(perechi.begin() + j);
                    k = 0;
                }
            }
        k--;
    }
    
    Comp functor;
    sort(perechi.begin(), perechi.end(), functor);

    for(i = 0; i < perechi.size(); i++)
    {
        cout<<perechi[i].first<<" "<<perechi[i].second<<endl;
    }
    return 0;
}
