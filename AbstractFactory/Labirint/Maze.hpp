#ifndef MAZE_HPP_
#define MAZE_HPP_

#include <map>

#include "Room/Room.hpp"

namespace Labirint {

class Maze 
{
private:
    std::map<int, Room *> rooms;
public:
    void addRoom(Room *room) {
        rooms.insert({room->getRoomNumber(), room});
    };
    Room *RoomNo(int number) {
        return rooms.find(number)->second;
    }
};

}

#endif