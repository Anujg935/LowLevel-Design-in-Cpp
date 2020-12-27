#include <bits/stdc++.h>

class Player{
public:
	std::string name;
	int numericId;
	bool isWin;
	std::vector<std::pair<int, int>> movesList;
public:
    Player();
	Player(std::string &name, int id);

    void move(int i, int j);
};