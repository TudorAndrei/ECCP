#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(int argc, char const *argv[])
{
    int flag;
    int i;
    int j;
    size_t find;
    int n;
    std::string line;
    getline(std::cin, line);
    std::vector<std::string> sentence;
    std::stringstream ss(line);
    std::string found;
    while (ss >> found){
        sentence.push_back(found);
    }
    for(i = 0; i < sentence[i].size(); i++)
    {
        std::cout<<sentence[i]<<" ";
    }
    std::cin>>n;
    std::vector<std::string> cuvinte(n);

    for(size_t l = 0; l < n; l++)
    {
        std::cin>>cuvinte[l];
    }
    
    for( i = 0; i < sentence.size(); i++){
        for(j = 0; j < cuvinte.size() && flag != 1; j++){
            flag = 0;
            if(sentence[i].find(cuvinte[j]) != std::string::npos){ // caut sa vad daca cuvantul[i] == sentence[i];
                sentence[i].replace(0, cuvinte[j].size(), (size_t)cuvinte[j].size(), '*');
                flag = 1;
            }
        }
    }
    for(i = 0; i < sentence[i].size(); i++)
    {
        std::cout<<sentence[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}
