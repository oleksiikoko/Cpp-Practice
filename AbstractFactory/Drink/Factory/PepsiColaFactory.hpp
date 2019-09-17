#ifndef PEPSICOLAFACTORY_HPP_
#define PEPSICOLAFACTORY_HPP_

#include "../AbstractFactory.hpp"
#include "../Water/PepsiColaWater.hpp"
#include "../Cover/PepsiColaCover.hpp"
#include "../Label/PepsiColaLabel.hpp"
#include "../Bottle/PepsiColaBottle.hpp"

class PepsiColaFactory : public AbstractFactory
{
public:
    AbstractWater* createWater()
    {
        return new PepsiColaWater;
    }
    AbstractCover* createCover()
    {
        return new PepsiColaCover;
    }
    AbstractLabel* createLabel()
    {
        return new PepsiColaLabel;
    }
    AbstractBottle* createBottle()
    {
        return new PepsiColaBottle;
    }
};

#endif