#ifndef CLIENT_HPP_
#define CLIENT_HPP_

#include "AbstractFactory.hpp"
#include "AbstractWater.hpp"
#include "AbstractBottle.hpp"
#include "AbstractCover.hpp"
#include "AbstractLabel.hpp"

class Client
{
private:
    AbstractWater* water;
    AbstractBottle* bottle;
    AbstractCover* cover;
    AbstractLabel* label;
public:
    Client(AbstractFactory *factory) {
        water = factory->createWater();
        bottle = factory->createBottle();
        cover = factory->createCover();
        label = factory->createLabel();
    }
    void Run() {
        bottle->Interact(water, cover, label);
    }

};

#endif