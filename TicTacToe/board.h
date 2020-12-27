
#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H
#include <player.h>

class Board {
    int **board;
    int n = 3;
    int *rowSum;int *colSum;
    int diagSum;
    int revDiagSum;
public :
    Board();

    // Player first =0 -1 for this
    // Player second = 1 +1for this
    // return 1 if 1st player wins, 2 if 2nd player wins, -1 if no one wins;
    int move(Player &player, int row, int col);


    bool getWinner(Player &player, int row, int col);

    void print();
};


#endif //TICTACTOE_BOARD_H
