#include <iostream>
#include "functions.hpp"

bool compare(const User& first, const User& second)
{
    return (first.index < second.index);
}
