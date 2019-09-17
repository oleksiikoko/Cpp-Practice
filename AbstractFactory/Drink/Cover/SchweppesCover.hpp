#ifndef SCHWEPPESCOVER_HPP_
#define SCHWEPPESCOVER_HPP_

#include <iostream>

#include "../AbstractCover.hpp"

class SchweppesCover : public AbstractCover
{
public:
    void info()
    {
        std::cout << "SchweppesCover";
    }
};

#endif