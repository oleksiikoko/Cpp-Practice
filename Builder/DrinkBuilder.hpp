#ifndef DRINKBUILDER_HPP_
#define DRINKBUILDER_HPP_

class DrinkBuilder
{
protected:
    Drink* drink;
public:
    DrinkBuilder() : drink(nullptr) {}
    virtual ~DrinkBuilder() {}
    virtual void createDrink() {}
    virtual void buildBottle() {}
    virtual void buildWater() {}
    virtual void buildCover() {}
    virtual void buildLabel() {}
    virtual Drink* getDrink() { return drink; }
};

#endif