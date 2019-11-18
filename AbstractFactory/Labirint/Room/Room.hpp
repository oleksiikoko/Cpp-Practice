#ifndef ROOM_HPP_
#define ROOM_HPP_

#include <map>
#include <iostream>

#include "../MapSite.hpp"
#include "../Enum/Direction.hpp"

namespace Labirint {

class Room : public MapSite {
private:
    int roomNumber;
    std::map<Direction, MapSite *> sides;
public:
    Room(const int roomNo);
    void Enter() override {
        std::cout << "Room";
    }
    MapSite *getSide(const Direction direction) const;
    void setSide(const Direction direction, MapSite *mapSite);
    int getRoomNumber() const;
};

Room::Room(const int roomNo) {
    this->roomNumber = roomNo;
}

MapSite *Room::getSide(const Direction direction) const {
    return sides.find(direction)->second;
}

void Room::setSide(const Direction direction, MapSite *mapSite) {
    sides.insert({direction, mapSite});
}

int Room::getRoomNumber() const {
    return roomNumber;
}

}

#endif