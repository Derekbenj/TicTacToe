#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char board[3][3];

public:
    Board();
    void displayBoard();
    bool checkIsEmpty(int row, int col);
    void update(int row, int col, char playerID);
    bool checkWin();
};

#endif