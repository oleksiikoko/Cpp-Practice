#ifndef DOOR_HPP_
#define DOOR_HPP_

#include <iostream>

#include "../MapSite.hpp"
#include "../Room/Room.hpp"

namespace Labirint {

class Door : public MapSite {
private:
    Room *room1;
    Room *room2;
    bool isOpen;
public:
    Door(Room *room1, Room *room2);
    void Enter() override {
        std::cout << "Door";
    }
    Room *OtherSideFrom(Room *room) const;
};

Door::Door(Room *room1, Room *room2) {
    this->room1 = room1;
    this->room2 = room2;
}

Room *Door::OtherSideFrom(Room *room) const {
    return room == room1 ? room2 : room1; 
}

}

#endif