#ifndef WALL_HPP_
#define WALL_HPP_

#include <iostream>

#include "../MapSite.hpp"

namespace Labirint {

class Wall : public MapSite {
public:
    Wall() {};
    void Enter() override {
        std::cout << "Wall";
    }
};

}

#endif
