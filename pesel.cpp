#include <iostream>
#include "pesel.hpp"

using namespace std;


Pesel::Pesel(int pesel)
{
    this->pesel=pesel;
}

vector<int> Pesel::integerToArray()
{
    vector <int> resultArray;

    while (true)
    {
       resultArray.insert(resultArray.begin(), pesel%10);
       pesel /= 10;
       if(pesel == 0)
           return resultArray;
    }
}
