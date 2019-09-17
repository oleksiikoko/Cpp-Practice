#include "ConcreteBuilder/CocaColaDrinkBuilder.hpp"
#include "Director.hpp"

int main() {
    Director dir;
    CocaColaDrinkBuilder ccBuilder;

    Drink *cocaCola = dir.createDrink(ccBuilder);
    cocaCola->info();
    return 0;
}