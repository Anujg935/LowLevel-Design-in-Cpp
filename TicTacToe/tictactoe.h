#include <bits/stdc++.h>
#include <iostream>
#include <board.h>
class TicTacToe{
	Player p1;
	Player p2;
    int moves;
    bool won = false;
    Board board;

public:
    TicTacToe(std::string &p1_name, std::string &p2_name);
    void play();
    void generateReport();
};
