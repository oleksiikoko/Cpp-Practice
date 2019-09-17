#ifndef ABSTRACTFACTORY_HPP_
#define ABSTRACTFACTORY_HPP_

#include "AbstractWater.hpp"
#include "AbstractBottle.hpp"
#include "AbstractCover.hpp"
#include "AbstractLabel.hpp"

class AbstractFactory
{
public:
    virtual AbstractWater*  createWater()   = 0;
    virtual AbstractCover*  createCover()   = 0;
    virtual AbstractLabel*  createLabel()   = 0;
    virtual AbstractBottle* createBottle()  = 0;

    virtual ~AbstractFactory() {};
};

#endif