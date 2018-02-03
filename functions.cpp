#include <iostream>
#include "functions.hpp"

bool compare(const Student& first, const Student& second)
{
    return (first.index < second.index);
}
