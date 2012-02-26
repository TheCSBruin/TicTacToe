#ifndef PLAYER_H
#define PLAYER_H

#include <list>
using namespace std;

class Game;

class Player {
public:
	Player(Game* g, char marker);
	~Player();
	bool in_spot(const int spot);
	void take_spot(const int spot);
	char get_marker();
private:
	char m_marker;
	list<int> m_spots;
	Game* m_game;
};

#endif