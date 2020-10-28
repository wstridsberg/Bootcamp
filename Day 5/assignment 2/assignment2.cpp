#include<iostream>
#include <vector>
#include <map>



int main()
{
    int rndnmb=33;
    int hash[rndnmb]={0}; 
    int const a=10000;
    int randArray[a];
    std::vector <std::pair<int,int>> sortingvect;


    std::map<int,int> result;

    for (int i=0;i<a;i++){
        randArray[i]=rand()%rndnmb;
        hash[randArray[i]]++; 
    }

    for (int i=0; i<rndnmb; i++){
        result[hash[i]] = (i+1);
    }

    for (auto &e: result)
        std::cout << e.first << " " << e.second << std::endl;
    return 0;


}













