#ifndef COCACODRINKBUILDER_HPP_
#define COCACODRINKBUILDER_HPP_

#include "../Director.hpp"

class CocaColaDrinkBuilder : public DrinkBuilder
{
public:
    void createDrink() { drink = new Drink; };
    void buildBottle() { drink->bottle =  new Bottle; }
    void buildWater() { drink->water = new Water; }
    void buildCover() { drink->cover = new Cover; }
    void buildLabel() { drink->label = new Label; }
};


#endif