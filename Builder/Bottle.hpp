#ifndef BOTTLE_HPP_
#define BOTTLE_HPP_

#include <iostream>

#include "Water.hpp"
#include "Cover.hpp"
#include "Label.hpp"

class Bottle
{
public:
    void info() {
        std::cout << "Bottle";
    }
    void Interact(Water* water, Cover* cover,
        Label* label)
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