#include <tictactoe.h>
TicTacToe::TicTacToe(std::string &p1_name, std::string &p2_name) {
    p1.name = p1_name;
    p2.name = p2_name;
    p1.numericId = 0;
    p2.numericId = 1;
    moves = 0;

}

void TicTacToe::play() {
    while(true){
        int x,y;
        std::cout << p1.name <<" move" <<std::endl;
        std::cin >> x >> y;

        int res = board.move(p1, x, y);
        if(res == 1){
            //std::cout << p1.name <<" won the match" << std::endl;
            won = true;
            p1.isWin = true;
            break;
        }
        if(moves >= 4){
            std::cout << "Match draw" << std::endl;
            won = false;
            break;
        }
        std::cout << p2.name <<" move"<<std::endl;
        std::cin >> x >> y;

        res = board.move(p2, x, y);
        if(res == 2){
            //std::cout << p2.name <<" won the match" << std::endl;
            won = true;
            p2.isWin = true;
            break;
        }

        moves++;
    }
    generateReport();
}
void TicTacToe::generateReport(){

    if(p1.isWin){
        std::cout << p1.name <<" Won the match" << std::endl;
    }
    else if(p2.isWin){
        std::cout << p2.name <<" Won the match" << std::endl;
    }
    else{
        std::cout << "Match draw" <<std::endl;
    }
    std::cout <<" Here is final board" << std::endl;
    std::cout <<"X for " << p1.name <<" & O for " << p2.name << std::endl;

    board.print();

}
