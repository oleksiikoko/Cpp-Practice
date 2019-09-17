#ifndef SCHWEPPESBOTTLE_H_
#define SCHWEPPESBOTTLE_H_

#include <iostream>

#include "../AbstractBottle.hpp"
#include "../AbstractWater.hpp"
#include "../AbstractCover.hpp"
#include "../AbstractLabel.hpp"

class SchweppesBottle : public AbstractBottle
{
public:
    void info()
    {
        std::cout << "SchweppesBottle";
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