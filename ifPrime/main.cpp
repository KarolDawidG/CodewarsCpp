#include <vector>
#include <iostream>
#include <bits/stdc++.h>



bool isPrime (int num)
{
    if (num < 2)
        return false;
for (int i=2; i*i <= num ;i++)
    if (num % i == 0)
        return 0;
    else
        return 1;
}

int main()
{
int num{};
std::cout<<"Type some number: ";
std::cin>>num;
if (isPrime(num) == 1){
    std::cout<<"\nThe number checked is prime"<<std::endl;
}
else{std::cout<<"The number checked is NOT prime"<<std::endl;}


    return 0;
}



