#ifndef DRINK_HPP_
#define DRINK_HPP_

#include "Bottle.hpp"

class Drink
{
public:
    Water* water;
    Cover* cover;
    Label* label;
    Bottle* bottle;

    void info() {
        bottle->Interact(water, cover, label);
    }
};

#endif