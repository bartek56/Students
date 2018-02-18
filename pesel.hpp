#ifndef pesel_hpp
#define pesel_hpp

#include <vector>

class Pesel
{
public:
    int pesel;
    Pesel(int pesel);

    std::vector<int> integerToArray();
};

#endif
