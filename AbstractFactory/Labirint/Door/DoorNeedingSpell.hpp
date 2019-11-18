#ifndef DOORNEEDINGSPELL_HPP_
#define DOORNEEDINGSPELL_HPP_

#include "Door.hpp"

namespace Labirint {

class DoorNeedingSpell : public Door
{
private:
    /* data */
public:
    DoorNeedingSpell(Room *room1, Room *room2);
};

DoorNeedingSpell::DoorNeedingSpell(Room *room1, Room *room2)
    :Door(room1, room2) {}

}

#endif