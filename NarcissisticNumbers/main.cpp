#include <vector>
#include <iostream>
#include <bits/stdc++.h>

bool narcissistic(int value)
{
std::vector<uint64_t> arrayNum;
std::vector<uint64_t> arrayNumSumOfPow;
int division = 10, rest{},sum{}, individualDigits{};
int lengthValue = std::to_string(value).length();
int copyValue = value;
for (int i=1; i<lengthValue+1; i++)
{
    rest = value % division;
    value = value/division;
    arrayNum.push_back(rest);
    individualDigits = pow(rest,lengthValue);
    arrayNumSumOfPow.push_back(individualDigits);
}
sum = std::accumulate(arrayNumSumOfPow.begin(),arrayNumSumOfPow.end(),0);
    if(sum == copyValue)
        {
            return true;
        }
    else
        {
            return false;
        }
}

int main()
{
int value{};
std::cout<<"Type some number: ";
std::cin>>value;
std::cout<<"Liczba "<<value;
    if(narcissistic(value) == 1){
        std::cout<<" jest narcystyczna. "<<std::endl;
    }
    else{
        std::cout<<" NIE jest narcystyczna. "<<std::endl;
    }
     return 0;
}



