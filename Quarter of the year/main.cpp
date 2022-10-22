#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

int quarter_of(int month){
    int quarter{};

    if(month > 0 && month < 4 ){
        quarter = 1;
        return quarter;
}
    else if (month > 3 && month < 7 ){
        quarter = 2;
        return quarter;
    }
    else if (month > 6 && month < 10 ){
        quarter = 3;
        return quarter;
    }
    else if (month > 9 && month < 13 ){
        quarter = 4;
       return quarter;
    }
    else{
        std::cout<<"The number is incorrect!"<<std::endl;
        return 0;
    }
}

int main()
{
int month{};
std::cout<<"Given a month as an integer from 1 to 12: ";
std::cin>>month;
std::cout<<"quarter of the year: "<<quarter_of(month)<<std::endl;
     return 0;
}
