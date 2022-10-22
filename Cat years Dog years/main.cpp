#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

//std::vector<int> humanYearsCatYearsDogYears(int humanYears){
int humanYearsCatYearsDogYears(int humanYears){
//int dogYears{};
int catYears{};
int year{};

    for (year = 1; year <= humanYears; year++){
        if (year == 1){
            catYears += 15;
           // dogYears += 15;
        }else if(year == 2){
            catYears += 9;
          //  dogYears += 9;
        }else{
            catYears += 4;
         //   dogYears += 4;
        }
    }
        return catYears;
    }


int main()
{
int humanYears{};
std::cout<<"How long do you have your pets? ";
std::cin>>humanYears;
std::cout<<"Pet has "<<humanYearsCatYearsDogYears(humanYears)<<std::endl;
     return 0;
}
