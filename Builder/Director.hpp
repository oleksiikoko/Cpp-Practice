#ifndef DIRECTOR_HPP_
#define DIRECTOR_HPP_

#include "Drink.hpp"
#include "DrinkBuilder.hpp"

class Director
{
public:
    Drink* createDrink(DrinkBuilder &builder){
        builder.createDrink();
        builder.buildBottle();
        builder.buildWater();
        builder.buildCover();
        builder.buildLabel();

        return builder.getDrink();
    }
};
#endif