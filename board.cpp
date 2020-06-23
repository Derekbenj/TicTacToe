#include "board.h"

#include <iostream>

Board::Board()
    : board{ { '-', '-', '-' }, { '-', '-', '-' }, { '-', '-', '-' } } {}

void Board::displayBoard() {
    std::cout << '\n';
    for (int row{ 0 }; row < 3; ++row) {
        for (int col{ 0 }; col < 3; ++col) {
            std::cout << board[row][col] << " ";
        }
        std::cout << "\n";
    }
    std::cout << '\n';
}

bool Board::checkIsEmpty(int row, int col) {
    if (board[row][col] == '-')
        return true;
    else {
        std::cout << "\nSorry That's not an option...\nPlease pick another "
                     "space.\n\n";
        return false;
    }
}

void Board::update(int row, int col, char playerID) {
    board[row][col] = playerID;
}

bool Board::checkWin() {
    // check the rows for wins
    for (int x{ 0 }; x < 3; ++x) {
        if ((board[x][0] == board[x][1]) && (board[x][1] == board[x][2]) &&
            (board[x][0] != '-'))
            return true;
    }

    // check the columns for wins
    for (int y{ 0 }; y < 3; ++y) {
        if ((board[0][y] == board[1][y]) && (board[1][y] == board[2][y]) &&
            (board[0][y] != '-'))
            return true;
    }

    // check the diagonals for wins
    if (((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
         (board[2][0] == board[1][1] && board[1][1] == board[0][2])) &&
        board[1][1] != '-')
        return true;

    // no winning patterns, so return false
    return false;
}