#ifndef PEPSICOLALABEL_H_
#define PEPSICOLALABEL_H_

#include <iostream>

#include "../AbstractLabel.hpp"

class PepsiColaLabel : public AbstractLabel
{
public:
    void info()
    {
        std::cout << "PepsiColaLabel";
    }
};

#endif