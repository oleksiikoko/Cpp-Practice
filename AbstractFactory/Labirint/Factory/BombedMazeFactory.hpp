#ifndef BOMBEDMAZEFACTORY_HPP_
#define BOMBEDMAZEFACTORY_HPP_

#include "MazeFactory.hpp"
#include "../Wall/BombedWall.hpp"
#include "../Room/RoomWithBomb.hpp"

namespace Labirint {

class BombedMazeFactory : public MazeFactory
{
public:
    Wall *MakeWall() override {
        return new BombedWall();
    }

    Room *MakeRoom(int number) override {
        return new RoomWithBomb(number);
    }
};

}

#endif