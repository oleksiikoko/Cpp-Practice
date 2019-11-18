#include <stdlib.h>
#include <time.h> 
#include <chrono>
#include <thread>

#include "MazeGame.hpp"
#include "Factory/BombedMazeFactory.hpp"

int main() {
    Labirint::MazeGame *game = new Labirint::MazeGame();
    Labirint::BombedMazeFactory *factory = new Labirint::BombedMazeFactory();
    Labirint::Maze *maze = game->CreateMaze(factory);

    std::srand(time(NULL));

    Labirint::Room *room = maze->RoomNo(rand() % 2 + 1);
    Labirint::MapSite *site = nullptr;


    while (true)
    {                
        switch (rand() % 4)
        {
            case 0:
                site = room->getSide(Labirint::Direction::North);
                break;
            case 1:
                site = room->getSide(Labirint::Direction::South);
                break;
            case 2:
                site = room->getSide(Labirint::Direction::East);
                break;
            case 3:
                site = room->getSide(Labirint::Direction::West);
                break;
        }

        std::cout << "Я в комнате " << room->getRoomNumber() << ". Делаю шаг. - ";
        site->Enter();
        std::cout << '\n';


        if (typeid(*site) == typeid(Labirint::Door))
        {
            Labirint::Door *door = dynamic_cast<Labirint::Door *>(site);

            room = door->OtherSideFrom(room);
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    
}