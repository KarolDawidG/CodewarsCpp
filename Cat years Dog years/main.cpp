#include <iostream>
#include <vector>


std::vector<int> humanYearsCatYearsDogYears(int humanYears){
int dogYears{};
int catYears{};
int year{};
std::vector<int>years;

    for (year = 1; year <= humanYears; year++){
        if (year == 1){
            catYears += 15;
            dogYears += 15;
        }else if(year == 2){
            catYears += 9;
            dogYears += 9;
        }else{
            catYears += 4;
            dogYears += 5;
        }
    }
        years.push_back(humanYears);
        years.push_back(catYears);
        years.push_back(dogYears);
        return years;
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

     return 0;
}
