#include <iostream>
#include <tictactoe.h>
#include <bits/stdc++.h>

using namespace std;

int main(){

    cout << "Enter players name" <<endl;
    string p1, p2;
    cout << "Enter first player name :";
    cin >> p1;
    cout << "Enter second player name :";
    cin >> p2;

    TicTacToe game(p1, p2);
    game.play();
    /*
	TicTacToe game(3);
    int moves = 0;
	while(true){
		cout << "Player 1 move" <<endl;
		int x, y;
		cin >> x >> y;

		int res = game.move(0, x, y);
		if(res==1){
			cout << "Player 1 won" <<endl;
			break;
		}
		else if(moves >=4){
			cout <<" Draw" <<endl;
			break;
		}
		cout << "Player 2 move" <<endl;
		cin >> x >> y;
		res = game.move(1, x, y);
		if(res==2){
			cout << "Player 1 won" <<endl;
			break;
		}
		moves++;
	}
    */
	return 0;
}