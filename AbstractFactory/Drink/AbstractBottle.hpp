#ifndef ABSTRACTBOTTLE_HPP_
#define ABSTRACTBOTTLE_HPP_

#include "AbstractWater.hpp"
#include "AbstractCover.hpp"
#include "AbstractLabel.hpp"

class AbstractBottle
{
public:
    virtual void info() = 0;
    virtual void Interact(AbstractWater* water, AbstractCover* cover,
        AbstractLabel* label) = 0;
    virtual ~AbstractBottle() {};
};

#endif