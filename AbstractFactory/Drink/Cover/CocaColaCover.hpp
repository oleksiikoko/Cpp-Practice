#ifndef COCACOLACOVER_HPP_
#define COCACOLACOVER_HPP_

#include <iostream>

#include "../AbstractCover.hpp"

class CocaColaCover : public AbstractCover
{
public:
    void info()
    {
        std::cout << "CocaColaCover";
    }
};
#endif