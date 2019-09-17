#ifndef PEPSICOLABOTTLE_HPP_
#define PEPSICOLABOTTLE_HPP_

#include <iostream>

#include "../AbstractBottle.hpp"
#include "../AbstractWater.hpp"
#include "../AbstractCover.hpp"
#include "../AbstractLabel.hpp"

class PepsiColaBottle : public AbstractBottle
{
public:
    void info()
    {
        std::cout << "PepsiColaBottle";
    }

    void Interact(AbstractWater* water, AbstractCover* cover,
        AbstractLabel* label)
    {
        std::cout << "We have - ";
        this->info();
        std::cout << " add ";
        water->info();
        std::cout << " then close with ";
        cover->info();
        std::cout << " final touch ";
        label->info();
    }
};
#endif