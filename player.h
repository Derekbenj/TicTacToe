#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "board.h"

class Player {
private:
    static int playerNum;
    std::string name;
    char id;

public:
    Player(std::vector<std::string> &names, std::vector<char> &ids);
    void makeMove(Board &board);
    std::string getName();
};

#endif