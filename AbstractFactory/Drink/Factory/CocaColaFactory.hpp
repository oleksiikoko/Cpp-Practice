#ifndef COCACOLAFACTORY_HPP_
#define COCACOLAFACTORY_HPP_

#include "../AbstractFactory.hpp"
#include "../Water/CocaColaWater.hpp"
#include "../Cover/CocaColaCover.hpp"
#include "../Label/CocaColaLabel.hpp"
#include "../Bottle/CocaColaBottle.hpp"

class CocaColaFactory : public AbstractFactory
{
public:
    AbstractWater* createWater()
    {
        return new CocaColaWater;
    }
    AbstractCover* createCover()
    {
        return new CocaColaCover;
    }
    AbstractLabel* createLabel()
    {
        return new CocaColaLabel;
    }
    AbstractBottle* createBottle()
    {
        return new CocaColaBottle;
    }
};

#endif