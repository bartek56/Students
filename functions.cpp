#include <iostream>
#include "functions.hpp"

bool compare(const Users& first, const Users& second)
{
    return (first.pesel < second.pesel);
}

