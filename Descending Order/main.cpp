#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

void descendingOrder(int &a)
{
std::vector<int> arrayNum;
int division = 10;
int rest{};
int lengthNum{};
lengthNum = std::to_string(a).length();

for (int i=1; i<lengthNum+1; i++)
{
    rest = a % division;
    a = a/division;
    if (rest < 0){rest=rest*10;}
    arrayNum.push_back(rest);
}
sort(arrayNum.begin(), arrayNum.end());
std::stringstream result;
std::copy(arrayNum.begin(), arrayNum.end(), std::ostream_iterator<int>(result, ""));
std::string sortNum = result.str().c_str();
std::cout<<sortNum<<std::endl;
}

int main()
{
int a{};
std::cout<<"Podaj cyfre: ";
std::cin>>a;
descendingOrder(a);

     return 0;
}




