#include <player.h>

Player::Player() {
}
Player::Player(std::string &name, int id){
	this->name = name;
	numericId = id;
	isWin = false;
}

void Player::move(int i, int j) {
    movesList.push_back({i, j});
}