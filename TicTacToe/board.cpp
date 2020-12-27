
#include "board.h"


Board::Board(){
    rowSum = new int[n];
    colSum = new int[n];
    diagSum = 0;
    revDiagSum = 0;


    board = new int*[n];
    for(int i=0;i<n;i++){
        rowSum[i] = 0;
        colSum[i] = 0;
        board[i] = new int[n];
        for(int j=0;j<n;j++){
            board[i][j] = 0;
        }
    }
}

// Player first =0 -1 for this
// Player second = 1 +1for this
// return 1 if 1st player wins, 2 if 2nd player wins, -1 if no one wins;
int Board::move(Player &player, int row, int col){
    if(row<0  || col< 0 || row>=n || col >=n){
        std::cout <<"Out of Board" <<std::endl;
        return -1;
    }
    else if(board[row][col] != 0){
        std::cout << "Cell already filled" <<std::endl;
        return -1;
    }
    else{
        board[row][col] = (player.numericId==0) ? -1:1;
        player.move(row, col);
        if(getWinner(player, row, col)){
            return (player.numericId==0) ? 1: 2;
        }
        else{
            return -1;
        }
    }
}

bool Board::getWinner(Player &player, int row, int col){
    rowSum[row] += (player.numericId == 0) ? -1:1;
    colSum[col] += (player.numericId == 0) ? -1:1;

    if(row==col){
        diagSum += (player.numericId == 0) ? -1:1;
    }

    if(col == n-row-1){
        revDiagSum += (player.numericId == 0) ? -1:1;;
    }

    if(abs(rowSum[row]) == n || abs(colSum[col]) == n || abs(diagSum) == n || abs(revDiagSum) == n){
        return true;
    }
    else{
        return false;
    }
}

void Board::print() {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j] == -1)
                std::cout << "X ";
            else if(board[i][j] == 1)
                std::cout << "O ";
            else
                std::cout << "E ";


        }
        std::cout <<std::endl;
    }
}
