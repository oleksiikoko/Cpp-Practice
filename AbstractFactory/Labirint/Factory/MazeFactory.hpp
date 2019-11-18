#ifndef MAZEFACTORY_HPP_
#define MAZEFACTORY_HPP_

#include "../Maze.hpp"
#include "../Wall/Wall.hpp"
#include "../Room/Room.hpp"
#include "../Door/Door.hpp"

namespace Labirint {

class MazeFactory
{
public:
    MazeFactory() {};

    virtual Maze *MakeMaze() {
        return new Maze();
    };
    virtual Wall *MakeWall() {
        return new Wall();
    }
    virtual Room *MakeRoom(int number) {
        return new Room(number);
    }
    virtual Door *MakeDoor(Room *room1, Room *room2) {
        return new Door(room1, room2);
    }
};

}

#endif