#ifndef BOARD_H
#define BOARD_H

class Board {
public:
	Board();
	~Board();
	void ClearScreen();
	int draw_board();
	bool is_avail(const int spot);
	void set(const int spot, const char marker);
	char get_marker_at(const int spot);
private:
	char grid[3][3];
};

#endif