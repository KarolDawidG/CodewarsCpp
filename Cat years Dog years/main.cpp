#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>

std::vector<int> humanYearsCatYearsDogYears(int humanYears){
std::vector<int>years{0,0,0};
    for (int year = 1; year <= humanYears; year++){
        if (year == 1){
            years.at(0) = humanYears;
            years.at(1) = 15;
            years.at(2) = 15;
        }else if(year == 2){
            years.at(1)= (years[1])+9;
            years.at(2)= (years[2])+9;
        }else{
          years.at(1)  = (years[1])+4;
          years.at(2)  = (years[2])+5;
        }
    }
        return years;
    }
std::vector<int>printVector(std::vector<int>yearsOfYourPets){
 for (int i = 0; i < yearsOfYourPets.size(); i++) {
        std::cout << yearsOfYourPets.at(i);
        std::cout << " ";
    }
}


int main()
{
int humanYears{};
std::cout<<"How old are your pets? ";
std::cin>>humanYears;
std::vector<int>yearsOfYourPets;
yearsOfYourPets = humanYearsCatYearsDogYears(humanYears);
std::cout<<"Your are "<<yearsOfYourPets[0]<<" years old"<<std::endl;
std::cout<<"Your cat is "<<yearsOfYourPets[1]<<" years old"<<std::endl;
std::cout<<"Your dog is "<<yearsOfYourPets[2]<<" years old"<<std::endl;
std::cout<<std::endl;

printVector(yearsOfYourPets);



     return 0;
}
