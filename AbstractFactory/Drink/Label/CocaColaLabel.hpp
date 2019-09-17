#ifndef COCACOLALABEL_HPP_
#define COCACOLALABEL_HPP_

#include <iostream>

#include "../AbstractLabel.hpp"

class CocaColaLabel : public AbstractLabel
{
public:
    void info()
    {
        std::cout << "CocaColaLabel";
    }
};

#endif