#ifndef COCACOLAWATER_H_
#define COCACOLAWATER_H_

#include <iostream>

#include "../AbstractWater.hpp"

class CocaColaWater : public AbstractWater
{
public:
    void info()
    {
        std::cout << "CocaColaWater";
    }
};

#endif