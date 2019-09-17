#ifndef SCHWEPPESWATER_HPP_
#define SCHWEPPESWATER_HPP_

#include <iostream>

#include "../AbstractLabel.hpp"

class SchweppesWater : public AbstractWater
{
public:
    void info()
    {
        std::cout << "ShweppesWater";
    }
};

#endif