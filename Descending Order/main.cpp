#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

//using namespace std;
int main()
{
std::vector<int> tab;
int liczba{};
std::cout<<"Podaj cyfre: ";
std::cin>>liczba;
int dzielenie = 10;
int reszta{};
int dlugoscNum{};
dlugoscNum = std::to_string(liczba).length();

for (int i=1; i<dlugoscNum+1; i++)
{
    reszta = liczba % dzielenie;
    liczba = liczba/dzielenie;
    if (reszta < 0){reszta=reszta*10;}
    tab.push_back(reszta);
}

sort(tab.begin(), tab.end());
std::stringstream result;
std::copy(tab.begin(), tab.end(), std::ostream_iterator<int>(result, ""));


std::string wynik = result.str().c_str();
std::cout<<wynik<<std::endl;

 return 0;
}
