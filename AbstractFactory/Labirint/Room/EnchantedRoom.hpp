#ifndef ENCHANTEDROOM_HPP_
#define ENCHANTEDROOM_HPP_

#include "Room.hpp"
#include "../Spell.hpp"

namespace Labirint
{

class EnchantedRoom : public Room
{
private:
    Spell spell;
public:
    EnchantedRoom(int roomNo) : Room(roomNo) {}
    EnchantedRoom(int roomNo, Spell spell) : Room(roomNo) {
        this->spell = spell;
    }
};


} // namespace Labirint


#endif