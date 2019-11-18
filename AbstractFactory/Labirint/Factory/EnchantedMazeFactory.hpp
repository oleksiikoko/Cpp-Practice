#ifndef ENCHANTEDMAZEFACTORY_HPP_
#define ENCHANTEDMAZEFACTORY_HPP_

#include "MazeFactory.hpp"

namespace Labirint {

class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchandedMazeFactory() {};

    Maze *MakeRoom() override {
        return new EnchantedRoom(number, CastSpell());
    }
    Wall *MakeDoor(Room *room1, Room *room2) {
        return new EnchantedDoor(room1, room2)
    }
protected:
    Spell CastSpell() {
        return nullptr;
    }
}

}

#endif