#ifndef SCHWEPPESLABEL_H_
#define SCHWEPPESLABEL_H_

#include <iostream>

#include "../AbstractLabel.hpp"

class SchweppesLabel : public AbstractLabel
{
public:
    void info()
    {
        std::cout << "SchweppesLabel";
    }
};

#endif