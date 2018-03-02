#ifndef pesel_hpp
#define pesel_hpp

#include <string>
#include <vector>

class Pesel
{
private:
    std::string peselString;
    long long pesel;
    std::vector<int> peselVector;
    bool valid;

    int getBirthYear();
    int getBirthMonth();
    int getBirthDay();
    bool checkSum();
    bool checkMonth();
    bool checkDay();
    bool leapYear(int year);
    std::vector<int> longLongToVector();

public:
    Pesel(std::string peselString);
    bool getValid();
};

#endif
