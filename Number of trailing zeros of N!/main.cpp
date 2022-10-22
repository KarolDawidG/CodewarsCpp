#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

long zeros(long n)
{
long silnia {1};
for (long i = 1; i <= n; i++)
    silnia =+ silnia*i;
return silnia;
}

int findZero(int n){
int ans{};
int p=5;
    while((n/p)>0){
        ans += (n/p);
        p = p*5;
        }
    return ans;
}

int main()
{
int n{};
std::cout<<"Type some number: ";
std::cin>>n;

std::cout<<"Result of N!: "<<zeros(n)<<std::endl;
std::cout<<"Number of zeros: "<<findZero(n)<<std::endl;
     return 0;
}
