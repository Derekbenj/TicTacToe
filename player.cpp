#include "player.h"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

Player::Player(std::vector<std::string> &names, std::vector<char> &ids) {
    do {
        std::cout << "What is your name "
                  << "player #" << Player::playerNum << ": ";
        std::getline(std::cin, name);
    } while (std::find(names.begin(), names.end(), name) != names.end());

    names.push_back(name);
    ++playerNum;

    do {
        std::cout << "What will your ID be (enter a single character please): ";
        std::cin >> id;
        std::cin.ignore(32767, '\n');
    } while (std::find(ids.begin(), ids.end(), id) != ids.end());

    ids.push_back(id);
    std::cout << '\n';
}

void Player::makeMove(Board &board) {
    std::cout << name << ", what will your next move be?\n";
    int row_guess;
    int col_guess;
    do {
        do {
            std::cout << "Enter a row: ";
            std::cin >> row_guess;
            std::cin.ignore(32767, '\n');
        } while (row_guess < 1 || row_guess > 3);

        do {
            std::cout << "Enter a column: ";
            std::cin >> col_guess;
            std::cin.ignore(32767, '\n');
        } while (col_guess < 1 || col_guess > 3);
    } while (!board.checkIsEmpty(row_guess - 1, col_guess - 1));

    // We know the guess hasn't been made here yet, so let's go ahead and update
    // the board
    board.update(row_guess - 1, col_guess - 1, id);
}

std::string Player::getName() { return name; }

int Player::playerNum{ 1 };