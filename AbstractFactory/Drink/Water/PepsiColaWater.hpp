#ifndef PEPSICOLAWATER_HPP_
#define PEPSICOLAWATER_HPP_

#include <iostream>

#include "../AbstractLabel.hpp"

class PepsiColaWater : public AbstractWater
{
public:
    void info()
    {
        std::cout << "PepsiColaWater";
    }
};

#endif