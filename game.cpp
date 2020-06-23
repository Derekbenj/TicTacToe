#include "game.h"

#include <iostream>

Game::Game() : one{ names, ids }, two{ names, ids }, board{} {
    std::cout << "\n---------------------------This is "
                 "Tic-Tac-Toe!---------------------------\n";
    int playerOneTurn{ 1 };
}

void Game::play() {
    while (true) {
        board.displayBoard();
        // figure out if a player has won by checking the board for patterns
        if (board.checkWin()) break;
        // figure out which player's turn it is, get a guess from that
        // player, and update the board based on the player's guess
        if (playerOneTurn) {
            one.makeMove(board);
        } else {
            two.makeMove(board);
        }

        // now switch turns
        playerOneTurn = (playerOneTurn + 1) % 2;
    }

    if (playerOneTurn)
        std::cout << "Congradulations " << two.getName() << "! You WON!!!!!\n";
    else
        std::cout << "Congradulations " << one.getName() << "! You WON!!!!!\n";
}
