#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

uint64_t descendingOrder(uint64_t &a)
{
std::vector<uint64_t> arrayNum;
uint64_t division = 10;
uint64_t rest{};
int lengthNum{};
lengthNum = std::to_string(a).length();

for (int i=1; i<lengthNum+1; i++)
{
    rest = a % division;
    a = a/division;
    if (rest < 0){rest=rest*10;}
    arrayNum.push_back(rest);
}
sort(arrayNum.begin(), arrayNum.end(), std::greater<uint64_t>());
reverse(arrayNum.begin(), arrayNum.end());
int decimal = 1;
int total = 0;
for (auto& it : arrayNum)
{
    total += it * decimal;
    decimal *= 10;
}
a = total;
return a;
}

int main()
{
uint64_t a{};
std::cout<<"Type some number: ";
std::cin>>a;

std::cout<<"Result after sorting: "<<descendingOrder(a)<<std::endl;
     return 0;
}
