#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "board.h"

class Game {
public:
	Game();
	~Game();
	void run();
	Player* get_player_1();
	Player* get_player_2();
	Board* get_board();
	void determine_winner();
	bool is_winner();
	char get_winner();
private:
	Player* player_1;
	Player* player_2;
	Board* m_board;
	char m_winner;
};

#endif