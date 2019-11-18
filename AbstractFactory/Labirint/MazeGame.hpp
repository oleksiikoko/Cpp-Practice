#ifndef MAZEGAME_HPP_
#define MAZEGAME_HPP_

#include "Factory/MazeFactory.hpp"

namespace Labirint {

class MazeGame
{
private:
    MazeFactory *factory;
public:
    Maze *CreateMaze(MazeFactory *factory) {
        this->factory = factory;

        Maze *aMaze =  new Maze;


        Room *r1 = this->factory->MakeRoom(1);
        Room *r2 = this->factory->MakeRoom(2);

        Door *aDoor = this->factory->MakeDoor(r1, r2);

        aMaze->addRoom(r1);
        aMaze->addRoom(r2);

        r1->setSide(Direction::North, this->factory->MakeWall());
        r1->setSide(Direction::East, aDoor);
        r1->setSide(Direction::South, this->factory->MakeWall());
        r1->setSide(Direction::West, this->factory->MakeWall());

        r2->setSide(Direction::North, this->factory->MakeWall());
        r2->setSide(Direction::East, this->factory->MakeWall());
        r2->setSide(Direction::South, this->factory->MakeWall());
        r2->setSide(Direction::West, aDoor);

        return aMaze;
    }
};

}

#endif