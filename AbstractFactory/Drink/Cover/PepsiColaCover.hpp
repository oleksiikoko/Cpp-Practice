#ifndef PEPSICOLACOVER_HPP_
#define PEPSICOLACOVER_HPP_

#include <iostream>

#include "../AbstractCover.hpp"

class PepsiColaCover : public AbstractCover
{
public:
    void info()
    {
        std::cout << "PepsiColaCover";
    }
};
#endif