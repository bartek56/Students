#include <iostream>
#include <cctype>
#include "pesel.hpp"

using namespace std;

int Pesel::getBirthYear()
{
    int year;
    int month;
    year = 10 * this->peselVector[0];
    year += this->peselVector[1];
    month = 10 * this->peselVector[2];
    month += this->peselVector[3];
    if (month > 80 && month < 93)
    {
        year += 1800;
    }
    else if (month > 0 && month < 13)
    {
        year += 1900;
    }
    else if (month > 20 && month < 33)
    {
        year += 2000;
    }
    else if (month > 40 && month < 53)
    {
        year += 2100;
    }
    else if (month > 60 && month < 73)
    {
        year += 2200;
    }
    return year;
}

int Pesel::getBirthMonth()
{
    int month;
    month = 10 * this->peselVector[2];
    month += this->peselVector[3];
    if (month > 80 && month < 93)
    {
        month -= 80;
    }
    else if (month > 20 && month < 33)
    {
        month -= 20;
    }
    else if (month > 40 && month < 53)
    {
        month -= 40;
    }
    else if (month > 60 && month < 73)
    {
        month -= 60;
    }
    return month;
}

int Pesel::getBirthDay()
{
    int day;
    day = 10 * this->peselVector[4];
    day += this->peselVector[5];
    return day;
}

bool Pesel::checkSum()
{
    int sum = 1 * this->peselVector[0] +
              3 * this->peselVector[1] +
          7 * this->peselVector[2] +
          9 * this->peselVector[3] +
          1 * this->peselVector[4] +
          3 * this->peselVector[5] +
          7 * this->peselVector[6] +
          9 * this->peselVector[7] +
          1 * this->peselVector[8] +
          3 * this->peselVector[9];
    sum %= 10;
    sum = 10 - sum;
    sum %= 10;

    if (sum == this->peselVector[10])
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Pesel::checkMonth()
{
    int month = getBirthMonth();
    if (month > 0 && month < 13)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Pesel::checkDay()
{
    int year = getBirthYear();
    int month = getBirthMonth();
    int day = getBirthDay();
    if ((day > 0 && day < 32) &&
        (month == 1 || month == 3 || month == 5 ||
         month == 7 || month == 8 || month == 10 ||
         month == 12))
    {
        return true;
    }
    else if ((day > 0 && day < 31) &&
        (month == 4 || month == 6 || month == 9 ||
         month == 11))
    {
        return true;
    }
    else if ((day > 0 && day < 30 && leapYear(year)) ||
             (day > 0 && day < 29 && !leapYear(year)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Pesel::leapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;
}

vector<int> Pesel::longLongToVector()
{
    vector<int> resultVector;
    resultVector.reserve(11);

    while (true)
    {
       resultVector.insert(resultVector.begin(), this->pesel%10);
       this->pesel /= 10;
       if(this->pesel == 0)
          return resultVector;
    }
}

Pesel::Pesel(string peselString)
{
    this->peselString = peselString;
    this->pesel = stoll(this->peselString);
    this->peselVector = longLongToVector();
    this->valid = false;

    if (peselString.length() != 11)
    {
        this->valid = false;
    }
    else
    {
        for (int i = 0; i < peselString.length(); ++i)
        {
            if(!isdigit(peselString[i]))
            {
                this->valid = false;
                return;
            }
        }
        if (checkSum() && checkMonth() && checkDay())
        {
            this->valid = true;
        }
        else
        {
            this->valid = false;
        }
    }
}

void Pesel::isValid()
{
    if (valid)
    {
        cout << "PESEL " << this->peselString << " jest prawidłowy!" << endl;
    }
    else
    {
        cout << "PESEL " << this->peselString << " jest nieprawidłowy!" << endl;
    }
}
