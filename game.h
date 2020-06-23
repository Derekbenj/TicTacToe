#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

#include "board.h"
#include "player.h"

class Game {
private:
    std::vector<std::string> names;
    std::vector<char> ids;
    Board board;
    Player one;
    Player two;
    int playerOneTurn;

public:
    Game();
    void play();
};

#endif