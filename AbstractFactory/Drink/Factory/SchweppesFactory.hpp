#ifndef SCHWEPPESFACTORY_HPP_
#define SCHWEPPESFACTORY_HPP_

#include "../AbstractFactory.hpp"
#include "../Water/SchweppesWater.hpp"
#include "../Cover/SchweppesCover.hpp"
#include "../Label/SchweppesLabel.hpp"
#include "../Bottle/SchweppesBottle.hpp"

class SchweppesFactory : public AbstractFactory
{
public:
    AbstractWater* createWater()
    {
        return new SchweppesWater;
    }
    AbstractCover* createCover()
    {
        return new SchweppesCover;
    }
    AbstractLabel* createLabel()
    {
        return new SchweppesLabel;
    }
    AbstractBottle* createBottle()
    {
        return new SchweppesBottle;
    }
};

#endif